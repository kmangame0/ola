# Makefile.in generated by automake 1.15 from Makefile.am.
# java/Makefile.  Generated from Makefile.in by configure.

# Copyright (C) 1994-2014 Free Software Foundation, Inc.

# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.



# OLA Java client


am__is_gnu_make = { \
  if test -z '$(MAKELEVEL)'; then \
    false; \
  elif test -n '$(MAKE_HOST)'; then \
    true; \
  elif test -n '$(MAKE_VERSION)' && test -n '$(CURDIR)'; then \
    true; \
  else \
    false; \
  fi; \
}
am__make_running_with_option = \
  case $${target_option-} in \
      ?) ;; \
      *) echo "am__make_running_with_option: internal error: invalid" \
              "target option '$${target_option-}' specified" >&2; \
         exit 1;; \
  esac; \
  has_opt=no; \
  sane_makeflags=$$MAKEFLAGS; \
  if $(am__is_gnu_make); then \
    sane_makeflags=$$MFLAGS; \
  else \
    case $$MAKEFLAGS in \
      *\\[\ \	]*) \
        bs=\\; \
        sane_makeflags=`printf '%s\n' "$$MAKEFLAGS" \
          | sed "s/$$bs$$bs[$$bs $$bs	]*//g"`;; \
    esac; \
  fi; \
  skip_next=no; \
  strip_trailopt () \
  { \
    flg=`printf '%s\n' "$$flg" | sed "s/$$1.*$$//"`; \
  }; \
  for flg in $$sane_makeflags; do \
    test $$skip_next = yes && { skip_next=no; continue; }; \
    case $$flg in \
      *=*|--*) continue;; \
        -*I) strip_trailopt 'I'; skip_next=yes;; \
      -*I?*) strip_trailopt 'I';; \
        -*O) strip_trailopt 'O'; skip_next=yes;; \
      -*O?*) strip_trailopt 'O';; \
        -*l) strip_trailopt 'l'; skip_next=yes;; \
      -*l?*) strip_trailopt 'l';; \
      -[dEDm]) skip_next=yes;; \
      -[JT]) skip_next=yes;; \
    esac; \
    case $$flg in \
      *$$target_option*) has_opt=yes; break;; \
    esac; \
  done; \
  test $$has_opt = yes
am__make_dryrun = (target_option=n; $(am__make_running_with_option))
am__make_keepgoing = (target_option=k; $(am__make_running_with_option))
pkgdatadir = $(datadir)/ola
pkgincludedir = $(includedir)/ola
pkglibdir = $(libdir)/ola
pkglibexecdir = $(libexecdir)/ola
am__cd = CDPATH="$${ZSH_VERSION+.}$(PATH_SEPARATOR)" && cd
install_sh_DATA = $(install_sh) -c -m 644
install_sh_PROGRAM = $(install_sh) -c
install_sh_SCRIPT = $(install_sh) -c
INSTALL_HEADER = $(INSTALL_DATA)
transform = $(program_transform_name)
NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
build_triplet = x86_64-apple-darwin15.3.0
host_triplet = x86_64-apple-darwin15.3.0
subdir = java
ACLOCAL_M4 = $(top_srcdir)/aclocal.m4
am__aclocal_m4_deps = $(top_srcdir)/config/ac_prog_java_cc.m4 \
	$(top_srcdir)/config/ac_pthread_set_name.m4 \
	$(top_srcdir)/config/ac_saleae.m4 \
	$(top_srcdir)/config/acx_pthread.m4 \
	$(top_srcdir)/config/ax_have_epoll.m4 \
	$(top_srcdir)/config/ax_prog_doxygen.m4 \
	$(top_srcdir)/config/ax_python_module.m4 \
	$(top_srcdir)/config/cppunit.m4 \
	$(top_srcdir)/config/libtool.m4 \
	$(top_srcdir)/config/ltoptions.m4 \
	$(top_srcdir)/config/ltsugar.m4 \
	$(top_srcdir)/config/ltversion.m4 \
	$(top_srcdir)/config/lt~obsolete.m4 \
	$(top_srcdir)/config/maven.m4 $(top_srcdir)/config/ola.m4 \
	$(top_srcdir)/config/pkg.m4 $(top_srcdir)/config/resolv.m4 \
	$(top_srcdir)/config/stl_hash.m4 \
	$(top_srcdir)/config/ola_version.m4 $(top_srcdir)/configure.ac
am__configure_deps = $(am__aclocal_m4_deps) $(CONFIGURE_DEPENDENCIES) \
	$(ACLOCAL_M4)
DIST_COMMON = $(srcdir)/Makefile.am $(am__DIST_COMMON)
mkinstalldirs = $(install_sh) -d
CONFIG_HEADER = $(top_builddir)/config.h
CONFIG_CLEAN_FILES =
CONFIG_CLEAN_VPATH_FILES =
AM_V_P = $(am__v_P_$(V))
am__v_P_ = $(am__v_P_$(AM_DEFAULT_VERBOSITY))
am__v_P_0 = false
am__v_P_1 = :
AM_V_GEN = $(am__v_GEN_$(V))
am__v_GEN_ = $(am__v_GEN_$(AM_DEFAULT_VERBOSITY))
am__v_GEN_0 = @echo "  GEN     " $@;
am__v_GEN_1 = 
AM_V_at = $(am__v_at_$(V))
am__v_at_ = $(am__v_at_$(AM_DEFAULT_VERBOSITY))
am__v_at_0 = @
am__v_at_1 = 
SOURCES =
DIST_SOURCES =
am__can_run_installinfo = \
  case $$AM_UPDATE_INFO_DIR in \
    n|no|NO) false;; \
    *) (install-info --version) >/dev/null 2>&1;; \
  esac
DATA = $(noinst_DATA)
am__tagged_files = $(HEADERS) $(SOURCES) $(TAGS_FILES) $(LISP)
am__DIST_COMMON = $(srcdir)/Makefile.in
DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)
ACLOCAL = ${SHELL} /Users/kellenreason/ola/config/missing aclocal-1.15
AMTAR = $${TAR-tar}
AM_DEFAULT_VERBOSITY = 1
AR = ar
AS = as
AUTOCONF = ${SHELL} /Users/kellenreason/ola/config/missing autoconf
AUTOHEADER = ${SHELL} /Users/kellenreason/ola/config/missing autoheader
AUTOMAKE = ${SHELL} /Users/kellenreason/ola/config/missing automake-1.15
AWK = awk
BISON = bison
CC = gcc
CCDEPMODE = depmode=gcc3
CFLAGS = -g -O2 -D_THREAD_SAFE 
CPP = gcc -E
CPPFLAGS = -I/opt/local/include
CPPUNIT_CFLAGS = -I/opt/local/include
CPPUNIT_CONFIG = /opt/local/bin/cppunit-config
CPPUNIT_LIBS = -L/opt/local/lib -lcppunit -ldl
CXX = g++
CXXCPP = g++ -E
CXXDEPMODE = depmode=gcc3
CXXFLAGS = -g -O2 -D_THREAD_SAFE 
CYGPATH_W = echo
DEFS = -DHAVE_CONFIG_H
DEPDIR = .deps
DLLTOOL = false
DOXYGEN_PAPER_SIZE = 
DSYMUTIL = dsymutil
DUMPBIN = 
DX_CONFIG = Doxyfile
DX_DOCDIR = doxygen-doc
DX_DOT = 
DX_DOXYGEN = 
DX_DVIPS = 
DX_EGREP = 
DX_ENV =  QUIET='YES' PROJECT_NUMBER='0.10.0' SRCDIR='.' PROJECT='OLA' DOCDIR='doxygen-doc' VERSION='0.10.0' HAVE_DOT='NO' GENERATE_MAN='NO' GENERATE_RTF='NO' GENERATE_XML='NO' GENERATE_HTMLHELP='NO' GENERATE_CHI='NO' GENERATE_HTML='NO' GENERATE_LATEX='NO'
DX_FLAG_chi = 0
DX_FLAG_chm = 0
DX_FLAG_doc = 0
DX_FLAG_dot = 0
DX_FLAG_html = 0
DX_FLAG_man = 0
DX_FLAG_pdf = 0
DX_FLAG_ps = 0
DX_FLAG_rtf = 0
DX_FLAG_verbose = 0
DX_FLAG_xml = 0
DX_HHC = 
DX_LATEX = 
DX_MAKEINDEX = 
DX_PDFLATEX = 
DX_PERL = /opt/local/bin/perl
DX_PROJECT = OLA
ECHO_C = \c
ECHO_N = 
ECHO_T = 
EGREP = /usr/bin/grep -E
EXEEXT = 
FGREP = /usr/bin/grep -F
GCJ_OPTS = 
GREP = /usr/bin/grep
INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_STRIP_PROGRAM = $(install_sh) -c -s
JAVA_CC = 
JAVA_CC_FLAGS = 
JAVA_CC_OPTS = 
LD = /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/ld
LDFLAGS = -L/opt/local/lib
LEX = flex
LEXLIB = 
LEX_OUTPUT_ROOT = lex.yy
LIBOBJS =  ${LIBOBJDIR}lstat$U.o
LIBS =  
LIBTOOL = $(SHELL) $(top_builddir)/libtool
LIPO = lipo
LN_S = ln -s
LTLIBOBJS =  ${LIBOBJDIR}lstat$U.lo
LT_SYS_LIBRARY_PATH = 
MAKEINFO = ${SHELL} /Users/kellenreason/ola/config/missing makeinfo
MANIFEST_TOOL = :
MAVEN = 
MKDIR_P = ../config/install-sh -c -d
NM = /usr/bin/nm
NMEDIT = nmedit
OBJDUMP = false
OBJEXT = o
OLA_CLIENT_LIBS = 
OLA_MAJOR_VERSION = 0
OLA_MINOR_VERSION = 10
OLA_PROTOC = /opt/local/bin/protoc --plugin=protoc-gen-cppservice=$(top_builddir)/protoc/ola_protoc_plugin
OLA_REVISION_VERSION = 0
OLA_SERVER_LIBS =  -lolaartnet -loladummy -lolae131 -lolaespnet -lolagpio -lolakarate -lolakinet -lolamilinst -lolaopendmx -lolaopenpixelcontrol -lolaosc -lolapathport -lolarenard -lolasandnet -lolashownet -lolastageprofi -lolausbdmx -lolausbpro
OTOOL = otool
OTOOL64 = :
PACKAGE = ola
PACKAGE_BUGREPORT = open-lighting@googlegroups.com
PACKAGE_NAME = OLA
PACKAGE_STRING = OLA 0.10.0
PACKAGE_TARNAME = ola
PACKAGE_URL = 
PACKAGE_VERSION = 0.10.0
PATH_SEPARATOR = :
PKG_CONFIG = /opt/local/bin/pkg-config
PLUGIN_LIBS =  plugins/artnet/libolaartnet.la plugins/dummy/liboladummy.la plugins/e131/libolae131.la plugins/espnet/libolaespnet.la plugins/gpio/libolagpio.la plugins/karate/libolakarate.la plugins/kinet/libolakinet.la plugins/milinst/libolamilinst.la plugins/opendmx/libolaopendmx.la plugins/openpixelcontrol/libolaopenpixelcontrol.la plugins/osc/libolaosc.la plugins/pathport/libolapathport.la plugins/renard/libolarenard.la plugins/sandnet/libolasandnet.la plugins/shownet/libolashownet.la plugins/stageprofi/libolastageprofi.la plugins/usbdmx/libolausbdmx.la plugins/usbpro/libolausbpro.la
PROTOC = /opt/local/bin/protoc
PTHREAD_CC = gcc
PTHREAD_CFLAGS = -D_THREAD_SAFE 
PTHREAD_CXX = g++
PTHREAD_CXXFLAGS = -D_THREAD_SAFE 
PTHREAD_LIBS = 
PYTHON = /opt/local/bin/python
PYTHON_EXEC_PREFIX = ${exec_prefix}
PYTHON_PLATFORM = darwin
PYTHON_PREFIX = ${prefix}
PYTHON_VERSION = 2.7
RANLIB = ranlib
RESOLV_LIBS = -lresolv
SED = /usr/bin/sed
SET_MAKE = 
SHELL = /bin/sh
STRIP = strip
VERSION = 0.10.0
abs_builddir = /Users/kellenreason/ola/java
abs_srcdir = /Users/kellenreason/ola/java
abs_top_builddir = /Users/kellenreason/ola
abs_top_srcdir = /Users/kellenreason/ola
ac_aux_dir = config
ac_ct_AR = ar
ac_ct_CC = gcc
ac_ct_CXX = g++
ac_ct_DUMPBIN = 
acx_pthread_config = 
am__include = include
am__leading_dot = .
am__quote = 
am__tar = $${TAR-tar} chof - "$$tardir"
am__untar = $${TAR-tar} xf -
avahi_CFLAGS = 
avahi_LIBS = 
base_uuid_CFLAGS = 
base_uuid_LIBS = 
bindir = ${exec_prefix}/bin
build = x86_64-apple-darwin15.3.0
build_alias = 
build_cpu = x86_64
build_os = darwin15.3.0
build_vendor = apple
builddir = .
datadir = ${datarootdir}
datarootdir = ${prefix}/share
docdir = ${datarootdir}/doc/${PACKAGE_TARNAME}
dvidir = ${docdir}
exec_prefix = ${prefix}
host = x86_64-apple-darwin15.3.0
host_alias = 
host_cpu = x86_64
host_os = darwin15.3.0
host_vendor = apple
htmldir = ${docdir}
includedir = ${prefix}/include
infodir = ${datarootdir}/info
install_sh = ${SHELL} /Users/kellenreason/ola/config/install-sh
libSaleaeDevice_LIBS = -lSaleaeDevice
libdir = ${exec_prefix}/lib
libexecdir = ${exec_prefix}/libexec
libftdi_CFLAGS = 
libftdi_LIBS = 
liblo_CFLAGS = -I/opt/local/include 
liblo_LIBS = -L/opt/local/lib -llo 
libmicrohttpd_CFLAGS = -I/opt/local/include -I/opt/local/include/p11-kit-1 -I/opt/local/include 
libmicrohttpd_LIBS = -L/opt/local/lib -lmicrohttpd 
libprotobuf_CFLAGS = -D_THREAD_SAFE -isystem /opt/local/include
libprotobuf_LIBS = -L/opt/local/lib -lprotobuf -D_THREAD_SAFE 
libusb_CFLAGS = -I/opt/local/include/libusb-1.0 
libusb_LIBS = -L/opt/local/lib -lusb-1.0 
libusb_error_name_CFLAGS = -I/opt/local/include/libusb-1.0 
libusb_error_name_LIBS = -L/opt/local/lib -lusb-1.0 
libusb_hotplug_api_CFLAGS = -I/opt/local/include/libusb-1.0 
libusb_hotplug_api_LIBS = -L/opt/local/lib -lusb-1.0 
localedir = ${datarootdir}/locale
localstatedir = ${prefix}/var
mandir = ${datarootdir}/man
mkdir_p = $(MKDIR_P)
ola_major_version = 
ola_minor_version = 
ola_revision_version = 
oldincludedir = /usr/include
ossp_uuid_CFLAGS = 
ossp_uuid_LIBS = 
pdfdir = ${docdir}
piddatadir = ${datarootdir}/ola/pids
pkgpyexecdir = ${pyexecdir}/ola
pkgpythondir = ${pythondir}/ola
prefix = /usr/local
program_transform_name = s,x,x,
psdir = ${docdir}
pyexecdir = ${exec_prefix}/lib/python2.7/site-packages
pythondir = ${prefix}/lib/python2.7/site-packages
sbindir = ${exec_prefix}/sbin
sharedstatedir = ${prefix}/com
srcdir = .
sysconfdir = ${prefix}/etc
target_alias = 
top_build_prefix = ../
top_builddir = ..
top_srcdir = ..
uuid_CFLAGS = 
uuid_LIBS = 
www_datadir = ${datarootdir}/olad/www
EXTRA_DIST = pom.xml \
             src/main/java/ola/OlaClient.java \
             src/main/java/ola/rpc/SimpleRpcController.java \
             src/main/java/ola/rpc/StreamRpcChannel.java \
             src/test/java/ola/OlaClientTest.java

CLEANFILES = src/main/java/ola/proto/Ola.java \
             src/main/java/ola/rpc/Rpc.java


# .jars aren't really data, but it sure ain't a program.
#noinst_DATA = ola.jar
all: all-am

.SUFFIXES:
$(srcdir)/Makefile.in:  $(srcdir)/Makefile.am  $(am__configure_deps)
	@for dep in $?; do \
	  case '$(am__configure_deps)' in \
	    *$$dep*) \
	      ( cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh ) \
	        && { if test -f $@; then exit 0; else break; fi; }; \
	      exit 1;; \
	  esac; \
	done; \
	echo ' cd $(top_srcdir) && $(AUTOMAKE) --gnu java/Makefile'; \
	$(am__cd) $(top_srcdir) && \
	  $(AUTOMAKE) --gnu java/Makefile
Makefile: $(srcdir)/Makefile.in $(top_builddir)/config.status
	@case '$?' in \
	  *config.status*) \
	    cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh;; \
	  *) \
	    echo ' cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe)'; \
	    cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe);; \
	esac;

$(top_builddir)/config.status: $(top_srcdir)/configure $(CONFIG_STATUS_DEPENDENCIES)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh

$(top_srcdir)/configure:  $(am__configure_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(ACLOCAL_M4):  $(am__aclocal_m4_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(am__aclocal_m4_deps):

mostlyclean-libtool:
	-rm -f *.lo

clean-libtool:
	-rm -rf .libs _libs
tags TAGS:

ctags CTAGS:

cscope cscopelist:


distdir: $(DISTFILES)
	@srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	topsrcdirstrip=`echo "$(top_srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	list='$(DISTFILES)'; \
	  dist_files=`for file in $$list; do echo $$file; done | \
	  sed -e "s|^$$srcdirstrip/||;t" \
	      -e "s|^$$topsrcdirstrip/|$(top_builddir)/|;t"`; \
	case $$dist_files in \
	  */*) $(MKDIR_P) `echo "$$dist_files" | \
			   sed '/\//!d;s|^|$(distdir)/|;s,/[^/]*$$,,' | \
			   sort -u` ;; \
	esac; \
	for file in $$dist_files; do \
	  if test -f $$file || test -d $$file; then d=.; else d=$(srcdir); fi; \
	  if test -d $$d/$$file; then \
	    dir=`echo "/$$file" | sed -e 's,/[^/]*$$,,'`; \
	    if test -d "$(distdir)/$$file"; then \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    if test -d $(srcdir)/$$file && test $$d != $(srcdir); then \
	      cp -fpR $(srcdir)/$$file "$(distdir)$$dir" || exit 1; \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    cp -fpR $$d/$$file "$(distdir)$$dir" || exit 1; \
	  else \
	    test -f "$(distdir)/$$file" \
	    || cp -p $$d/$$file "$(distdir)/$$file" \
	    || exit 1; \
	  fi; \
	done
check-am: all-am
check: check-am
all-am: Makefile $(DATA)
installdirs:
install: install-am
install-exec: install-exec-am
install-data: install-data-am
uninstall: uninstall-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am

installcheck: installcheck-am
install-strip:
	if test -z '$(STRIP)'; then \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	      install; \
	else \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	    "INSTALL_PROGRAM_ENV=STRIPPROG='$(STRIP)'" install; \
	fi
mostlyclean-generic:

clean-generic:
	-test -z "$(CLEANFILES)" || rm -f $(CLEANFILES)

distclean-generic:
	-test -z "$(CONFIG_CLEAN_FILES)" || rm -f $(CONFIG_CLEAN_FILES)
	-test . = "$(srcdir)" || test -z "$(CONFIG_CLEAN_VPATH_FILES)" || rm -f $(CONFIG_CLEAN_VPATH_FILES)

maintainer-clean-generic:
	@echo "This command is intended for maintainers to use"
	@echo "it deletes files that may require special tools to rebuild."
clean: clean-am

clean-am: clean-generic clean-libtool mostlyclean-am

distclean: distclean-am
	-rm -f Makefile
distclean-am: clean-am distclean-generic

dvi: dvi-am

dvi-am:

html: html-am

html-am:

info: info-am

info-am:

install-data-am:

install-dvi: install-dvi-am

install-dvi-am:

install-exec-am:

install-html: install-html-am

install-html-am:

install-info: install-info-am

install-info-am:

install-man:

install-pdf: install-pdf-am

install-pdf-am:

install-ps: install-ps-am

install-ps-am:

installcheck-am:

maintainer-clean: maintainer-clean-am
	-rm -f Makefile
maintainer-clean-am: distclean-am maintainer-clean-generic

mostlyclean: mostlyclean-am

mostlyclean-am: mostlyclean-generic mostlyclean-libtool

pdf: pdf-am

pdf-am:

ps: ps-am

ps-am:

uninstall-am:

.MAKE: install-am install-strip

.PHONY: all all-am check check-am clean clean-generic clean-libtool \
	cscopelist-am ctags-am distclean distclean-generic \
	distclean-libtool distdir dvi dvi-am html html-am info info-am \
	install install-am install-data install-data-am install-dvi \
	install-dvi-am install-exec install-exec-am install-html \
	install-html-am install-info install-info-am install-man \
	install-pdf install-pdf-am install-ps install-ps-am \
	install-strip installcheck installcheck-am installdirs \
	maintainer-clean maintainer-clean-generic mostlyclean \
	mostlyclean-generic mostlyclean-libtool pdf pdf-am ps ps-am \
	tags-am uninstall uninstall-am

.PRECIOUS: Makefile


src/main/java/ola/proto/Ola.java: ${top_srcdir}/common/protocol/Ola.proto
	$(PROTOC) --java_out=src/main/java --proto_path=${top_srcdir}/common/protocol ${top_srcdir}/common/protocol/Ola.proto

src/main/java/ola/rpc/Rpc.java: ${top_srcdir}/common/rpc/Rpc.proto
	$(PROTOC) --java_out=src/main/java --proto_path=${top_srcdir}/common/rpc ${top_srcdir}/common/rpc/Rpc.proto

ola.jar: src/main/java/ola/proto/Ola.java src/main/java/ola/rpc/Rpc.java
	mvn package

# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
