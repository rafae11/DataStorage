#-------------------------------------------------
#
# Project created by QtCreator 2016-03-18T23:06:59
#
#-------------------------------------------------

QT       -= gui

TARGET = Message
TEMPLATE = lib

DEFINES += MESSAGE_LIBRARY

SOURCES += \
    dataconfig.cpp \
    replayconfig.cpp \
    messagebase.cpp \
    storedatarequest.cpp

HEADERS +=\
        message_global.h \
    dataconfig.h \
    replayconfig.h \
    messagebase.h \
    storedatarequest.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
