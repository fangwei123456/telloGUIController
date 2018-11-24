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
    udpcontrollerthread.cpp

HEADERS  += mainwindow.h \
    udpcontrollerthread.h

FORMS    += mainwindow.ui


