# Generated automatically from Makefile.in by configure.
# Makefile.in generated automatically by automake 1.4 from Makefile.am

# Copyright (C) 1994, 1995-8, 1999 Free Software Foundation, Inc.
# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.

# Makefile for `recode' regression tests.
# Copyright � 1996, 1997, 1998, 1999, 2000 Free Software Foundation, Inc.
# Fran�ois Pinard <pinard@iro.umontreal.ca>, 1988.

# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2, or (at your option)
# any later version.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.

# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
# 02111-1307, USA.


SHELL = /bin/sh

srcdir = .
top_srcdir = ..
prefix = /usr/local
exec_prefix = ${prefix}

bindir = ${exec_prefix}/bin
sbindir = ${exec_prefix}/sbin
libexecdir = ${exec_prefix}/libexec
datadir = ${prefix}/share
sysconfdir = ${prefix}/etc
sharedstatedir = ${prefix}/com
localstatedir = ${prefix}/var
libdir = ${exec_prefix}/lib
infodir = ${prefix}/info
mandir = ${prefix}/man
includedir = ${prefix}/include
oldincludedir = /usr/include

DESTDIR =

pkgdatadir = $(datadir)/recode
pkglibdir = $(libdir)/recode
pkgincludedir = $(includedir)/recode

top_builddir = ..

ACLOCAL = aclocal
AUTOCONF = autoconf
AUTOMAKE = automake
AUTOHEADER = autoheader

INSTALL = /bin/install -c
INSTALL_PROGRAM = ${INSTALL} $(AM_INSTALL_PROGRAM_FLAGS)
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_SCRIPT = ${INSTALL_PROGRAM}
transform = s,x,x,

NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
host_alias = i686-pc-cygwin
host_triplet = i686-pc-cygwin
ALL_LINGUAS = da de el es fr gl it nl pl pt sl sv
ALL_MOFILES =  da.mo de.mo el.mo es.mo fr.mo gl.mo it.mo nl.mo pl.mo pt.mo sl.mo sv.mo
ALL_POFILES =  da.po de.po el.po es.po fr.po gl.po it.po nl.po pl.po pt.po sl.po sv.po
AS = @AS@
AT_TESTPATH = ../src
CC = gcc
CPP = gcc -E
DLLTOOL = @DLLTOOL@
ECHO_C = 
ECHO_N = -n
GLIBC21 = no
LEX = flex
LEX_OUTPUT_ROOT = lex.yy
LIBOBJS = gettext$U.o
LIBTOOL = $(SHELL) $(top_builddir)/libtool
LN_S = ln -s
LTALLOCA = 
LTLIBOBJS = gettext$U.lo
MAKEINFO = makeinfo
MOFILES =  da.mo de.mo el.mo es.mo fr.mo gl.mo it.mo nl.mo pl.mo pt.mo sl.mo sv.mo
OBJDUMP = @OBJDUMP@
PACKAGE = recode
RANLIB = ranlib
U = 
VERSION = 3.6

AUTOMAKE_OPTIONS = gnits

SUITE = african.m4 base64.m4 combine.m4 dumps.m4 lists.m4 methods.m4 names.m4 quoted.m4 testdump.m4 utf7.m4 utf8.m4


EXTRA_DIST = atgeneral.m4 suite.m4 testsuite $(SUITE) bigauto.py dumps-data quoted-data utf7-data


PYTHON = python
mkinstalldirs = $(SHELL) $(top_srcdir)/mkinstalldirs
CONFIG_HEADER = ../config.h
CONFIG_CLEAN_FILES =  atconfig
DIST_COMMON =  ChangeLog Makefile.am Makefile.in atconfig.in


DISTFILES = $(DIST_COMMON) $(SOURCES) $(HEADERS) $(TEXINFOS) $(EXTRA_DIST)

TAR = tar
GZIP_ENV = --best
all: all-redirect
.SUFFIXES:
$(srcdir)/Makefile.in: Makefile.am $(top_srcdir)/configure.in $(ACLOCAL_M4) 
	cd $(top_srcdir) && $(AUTOMAKE) --gnits --include-deps tests/Makefile

Makefile: $(srcdir)/Makefile.in  $(top_builddir)/config.status
	cd $(top_builddir) \
	  && CONFIG_FILES=$(subdir)/$@ CONFIG_HEADERS= $(SHELL) ./config.status

atconfig: $(top_builddir)/config.status atconfig.in
	cd $(top_builddir) && CONFIG_FILES=$(subdir)/$@ CONFIG_HEADERS= $(SHELL) ./config.status
tags: TAGS
TAGS:


distdir = $(top_builddir)/$(PACKAGE)-$(VERSION)/$(subdir)

subdir = tests

distdir: $(DISTFILES)
	@for file in $(DISTFILES); do \
	  d=$(srcdir); \
	  if test -d $$d/$$file; then \
	    cp -pr $$/$$file $(distdir)/$$file; \
	  else \
	    test -f $(distdir)/$$file \
	    || ln $$d/$$file $(distdir)/$$file 2> /dev/null \
	    || cp -p $$d/$$file $(distdir)/$$file || :; \
	  fi; \
	done
info-am:
info: info-am
dvi-am:
dvi: dvi-am
check-am: all-am
	$(MAKE) $(AM_MAKEFLAGS) check-local
check: check-am
installcheck-am:
installcheck: installcheck-am
install-exec-am:
install-exec: install-exec-am

install-data-am:
install-data: install-data-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am
install: install-am
uninstall-am:
uninstall: uninstall-am
all-am: Makefile all-local
all-redirect: all-am
install-strip:
	$(MAKE) $(AM_MAKEFLAGS) AM_INSTALL_PROGRAM_FLAGS=-s install
installdirs:


mostlyclean-generic:

clean-generic:

distclean-generic:
	-rm -f Makefile $(CONFIG_CLEAN_FILES)
	-rm -f config.cache config.log stamp-h stamp-h[0-9]*

maintainer-clean-generic:
mostlyclean-am:  mostlyclean-generic

mostlyclean: mostlyclean-am

clean-am:  clean-generic mostlyclean-am clean-local

clean: clean-am

distclean-am:  distclean-generic clean-am
	-rm -f libtool

distclean: distclean-am

maintainer-clean-am:  maintainer-clean-generic distclean-am
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."

maintainer-clean: maintainer-clean-am

.PHONY: tags distdir info-am info dvi-am dvi check-local check check-am \
installcheck-am installcheck install-exec-am install-exec \
install-data-am install-data install-am install uninstall-am uninstall \
all-local all-redirect all-am all installdirs mostlyclean-generic \
distclean-generic clean-generic maintainer-clean-generic clean \
mostlyclean distclean maintainer-clean


all-local: atconfig testsuite

# I have been told that the `libtool' bug who warranted the following
# diagnostic has been corrected by now, so I silenced it out of `check-local'.
#	@if test -f $(libdir)/librecode.so; then \
#	  echo; \
#	  echo "WARNING: A recode library is already installed.  Sadly, it"; \
#	  echo "         _might_ interfere with checking.  You might want to"; \
#	  echo "         delete it first, or rename it out of the way."; \
#	  echo; \
#	fi
check-local: atconfig testsuite
	$(SHELL) $(srcdir)/testsuite

$(srcdir)/testsuite: atgeneral.m4 suite.m4 $(SUITE)
	m4 -I $(srcdir) atgeneral.m4 suite.m4 | cat -s > $@-tmp
	mv $@-tmp $@

bigtest: warning
	PATH=../src:$$PATH $(PYTHON) $(srcdir)/bigauto.py

bigtest-strict: warning
	PATH=../src:$$PATH $(PYTHON) $(srcdir)/bigauto.py -s

warning:
	echo 1>&2 '==============================================='
	echo 1>&2 "The \`bigauto' test may take hours.  Be patient."
	echo 1>&2 '==============================================='

clean-local:
	rm -f at-check-line debug-*.sh stderr stdout
	rm -f input output big-s-off.res big-s-on.res

# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
