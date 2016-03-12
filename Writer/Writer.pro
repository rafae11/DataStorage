#-------------------------------------------------
#
# Project created by QtCreator 2016-03-12T00:31:13
#
#-------------------------------------------------

QT       -= gui

TARGET = Writer
TEMPLATE = lib
CONFIG += staticlib

SOURCES += writer.cpp

HEADERS += writer.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
