#-------------------------------------------------
#
# Project created by QtCreator 2015-12-14T22:57:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test1
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    newtask.cpp \
    task.cpp

HEADERS  += widget.h \
    newtask.h \
    task.h

FORMS    += widget.ui \
    newtask.ui \
    task.ui
