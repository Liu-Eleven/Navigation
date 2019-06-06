#-------------------------------------------------
#
# Project created by QtCreator 2013-08-30T10:16:52
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Navigation
TEMPLATE = app


SOURCES += main.cpp\
        navigation.cpp \
    mystandarditemmodel.cpp \
    myitemdelegate.cpp \
    MyTableView.cpp

HEADERS  += navigation.h \
    mystandarditemmodel.h \
    myitemdelegate.h \
    MyTableView.h

RESOURCES += \
    image.qrc
