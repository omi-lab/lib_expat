TARGET = lib_expat
TEMPLATE = lib

DEFINES += LIB_EXPAT_LIBRARY

HEADERS += inc/expat.h
HEADERS += inc/expat/expat_config.h
HEADERS += inc/expat/xmltok.h
HEADERS += inc/expat/xmlrole.h
HEADERS += inc/expat/ascii.h
HEADERS += inc/expat/xmltok_impl.h
HEADERS += inc/expat/expat_external.h
HEADERS += inc/expat/utf8tab.h
HEADERS += inc/expat/siphash.h
HEADERS += inc/expat/nametab.h
HEADERS += inc/expat/latin1tab.h
HEADERS += inc/expat/winconfig.h
HEADERS += inc/expat/internal.h
HEADERS += inc/expat/iasciitab.h
HEADERS += inc/expat/asciitab.h

SOURCES += src/xmlparse.c
SOURCES += src/xmltok_impl.c
SOURCES += src/xmltok_ns.c
SOURCES += src/xmlrole.c
SOURCES += src/xmltok.c
