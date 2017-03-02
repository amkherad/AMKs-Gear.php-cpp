#TARGET += gearphp.so
#DLLDESTDIR += /home/amk/bin
#DESTDIR_TARGET += /home/amk/bin/gearphp.so

rootPath = /home/amk/dev/php/AMKs-Gear-php/src

CONFIG += dll
CONFIG -= app_bundle
CONFIG -= qt

#QMAKE_MAKEFILE = MAKEFILE

QMAKE_CXXFLAGS += -Wall -c -O2 -std=c++11 -fpic -o
DEPENDPATH += /home/amk/dev/PHP-CPP \
    /home/amk/dev/PHP-CPP/includes \
    $${rootPath}/includes \
    $${rootPath}/arch/headers \
    $${rootPath}/arch/headers/app



unix:LIBS += -lphpcpp
win32:LIBS += -lphpcpp
