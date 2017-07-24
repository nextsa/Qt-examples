#-------------------------------------------------
#
# Project created by QtCreator 2017-04-26T17:38:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = t3
TEMPLATE = app
CONFIG+=C++11

SOURCES += main.cpp\
        dialog.cpp \
    figure.cpp \
    circle.cpp \
    rectangle.cpp \
    triangle.cpp

HEADERS  += dialog.h \
    figure.h \
    circle.h \
    rectangle.h \
    triangle.h

FORMS    += dialog.ui
