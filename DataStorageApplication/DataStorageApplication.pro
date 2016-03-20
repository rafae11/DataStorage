#-------------------------------------------------
#
# Project created by QtCreator 2016-03-12T00:36:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DataStorageApplication
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    data.cpp

HEADERS  += mainwindow.h \
    data.h \
    overloads.h

FORMS    += mainwindow.ui

#INCLUDEPATH  += "C:/Users/rafael/Documents/GitHub/DataStorage/Message"
#LIBS += "C:/Users/rafael/Documents/GitHub/build-DataStorage-Desktop_Qt_5_5_1_MSVC2013_64bit-Debug/Message/debug/Message.dll"


win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../Message/release/ -lMessage
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../Message/debug/ -lMessage

INCLUDEPATH += $$PWD/../Message
DEPENDPATH += $$PWD/../Message
