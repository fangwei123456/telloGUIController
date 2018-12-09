#-------------------------------------------------
#
# Project created by QtCreator 2018-11-24T15:48:10
#
#-------------------------------------------------

QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = telloGUIController
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    tellodata.cpp \
    udpclient.cpp \
    tellocontroller.cpp \
    videostreamreader.cpp

HEADERS  += mainwindow.h \
    tellodata.h \
    udpclient.h \
    tellocontroller.h \
    videostreamreader.h

FORMS    += mainwindow.ui

CONFIG += link_pkgconfig
PKGCONFIG += opencv
