/*
 * BIG5HKSCS
 */

/*
 * BIG5HKSCS can be downloaded from
 *   http://www.info.gov.hk/digital21/eng/hkscs/download.html
 *   http://www.info.gov.hk/digital21/eng/hkscs/index.html
 *
 * It extends BIG5 (without the rows 0xC6..0xC7) through the ranges
 *
 *   0x{88..8D}{40..7E,A1..FE}      641 characters
 *   0x{8E..A0}{40..7E,A1..FE}     2898 characters
 *   0x{C6..C8}{40..7E,A1..FE}      359 characters
 *   0xF9{D6..FE}                    41 characters
 *   0x{FA..FE}{40..7E,A1..FE}      763 characters
 *
 * It thereby introduces an irreversible mapping
 *   0x8BF8   0x9F9C
 *   0xC074   0x9F9C
 */

#include "hkscs.h"

static int
big5hkscs_mbtowc (conv_t conv, ucs4_t *pwc, const unsigned char *s, int n)
{
  unsigned char c = *s;
  /* Code set 0 (ASCII) */
  if (c < 0x80)
    return ascii_mbtowc(conv,pwc,s,n);
  /* Code set 1 (BIG5 extended) */
  if (c >= 0xa1 && c < 0xff) {
    if (n < 2)
      return RET_TOOFEW(0);
    {
      unsigned char c2 = s[1];
      if ((c2 >= 0x40 && c2 < 0x7f) || (c2 >= 0xa1 && c2 < 0xff)) {
        if (!((c == 0xc6 && c2 >= 0xa1) || c == 0xc7)) {
          int ret = big5_mbtowc(conv,pwc,s,2);
          if (ret != RET_ILSEQ)
            return ret;
        }
      }
    }
  }
  return hkscs_mbtowc(conv,pwc,s,n);
}

static int
big5hkscs_wctomb (conv_t conv, unsigned char *r, ucs4_t wc, int n)
{
  unsigned char buf[2];
  int ret;

  /* Code set 0 (ASCII) */
  ret = ascii_wctomb(conv,r,wc,n);
  if (ret != RET_ILSEQ)
    return ret;

  /* Code set 1 (BIG5 extended) */
  ret = big5_wctomb(conv,buf,wc,2);
  if (ret != RET_ILSEQ) {
    if (ret != 2) abort();
    if (!((buf[0] == 0xc6 && buf[1] >= 0xa1) || buf[0] == 0xc7)) {
      if (n < 2)
        return RET_TOOSMALL;
      r[0] = buf[0];
      r[1] = buf[1];
      return 2;
    }
  }
  return hkscs_wctomb(conv,r,wc,n);
}
