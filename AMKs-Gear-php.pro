TEMPLATE = lib

CONFIG += dll
CONFIG -= app_bundle
CONFIG -= qt

#QMAKE_MAKEFILE = MAKEFILE

QMAKE_CXXFLAGS += -Wall -c -O2 -std=c++11 -fpic -o

#LIBS += phpcpp

TARGET += amkgearphp
DLLDESTDIR += /home/amk/bin/

DESTDIR_TARGET += /home/amk/bin/gearphp.so

QMAKE_INCDIR += /home/amk/dev/PHP-CPP \
    /home/amk/dev/PHP-CPP/includes

SOURCES += main.cpp



include(deployment.pri)
include(build/afterbuild.pri)

qtcAddDeployment()

