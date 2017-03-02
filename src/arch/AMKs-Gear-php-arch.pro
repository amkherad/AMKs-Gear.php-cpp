include(../../project-settings.pri)

TEMPLATE = lib

TARGET = gear.arch

SOURCES += sources/main.cpp \
    sources/gearbaseclass.cpp \
\
    sources/fx/_gearhelpers.cpp \
    sources/fx/gearclassregistrar.cpp \
\
    sources/core/gearconfiguration.cpp \
\
    sources/exceptions/gearexception.cpp \
    sources/exceptions/gearargumentnullexception.cpp \
    sources/exceptions/gearinvalidoperationexception.cpp \
    sources/exceptions/gearnotsupportedexception.cpp \
\
    sources/app/gearappengine.cpp \


HEADERS += ../includes/_gear.h \
    headers/gearbaseinterface.h \
    headers/gearbaseclass.h \
\
    headers/fx/_gearhelpers.h \
    headers/fx/gearclassregistrar.h \
\
    headers/core/_namespace.h \
    headers/exceptions/_namespace.h \
    headers/automation/_namespace.h \
    headers/app/_namespace.h \
    headers/controller/_namespace.h \
    headers/model/_namespace.h \
    headers/view/_namespace.h \
    headers/route/_namespace.h \
    headers/http/_namespace.h \
\
\
    headers/core/igearcontext.h \
    headers/core/gearconfiguration.h \
\
    headers/exceptions/gearexception.h \
    headers/exceptions/gearinvalidoperationexception.h \
    headers/exceptions/gearargumentnullexception.h \
    headers/exceptions/gearnotsupportedexception.h \
\
    headers/app/gearappengine.h \
