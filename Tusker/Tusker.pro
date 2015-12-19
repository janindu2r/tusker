#-------------------------------------------------
#
# Project created by QtCreator 2015-12-17T09:50:06
#
#-------------------------------------------------

QT       += core gui xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Tusker
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    newtask.cpp \
    xmlfunction.cpp

HEADERS  += widget.h \
    newtask.h \
    xmlfunction.h

FORMS    += widget.ui \
    newtask.ui

RESOURCES += \
    xml.qrc
