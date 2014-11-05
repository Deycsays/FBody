#-------------------------------------------------
#
# Project created by QtCreator 2014-11-04T11:11:24
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FBody
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    login.cpp \
    fbmodel.cpp

HEADERS  += mainwindow.h \
    login.h \
    fbmodel.h

FORMS    += mainwindow.ui \
    login.ui
