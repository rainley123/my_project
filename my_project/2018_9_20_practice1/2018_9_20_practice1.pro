#-------------------------------------------------
#
# Project created by QtCreator 2018-09-20T07:35:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 2018_9_20_practice1
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
        buttonwidget.cpp \
    block.cpp \
    gamewidget.cpp \
    blockgroup.cpp \
    tank.cpp \
    mytank.cpp \
    enemytank.cpp

HEADERS += \
        mainwindow.h \
        buttonwidget.h \
    block.h \
    gamewidget.h \
    blockgroup.h \
    tank.h \
    mytank.h \
    enemytank.h

FORMS += \
        mainwindow.ui \
    buttonwidget.ui \
    gamewidget.ui

DISTFILES +=
