#-------------------------------------------------
#
# Project created by QtCreator 2021-04-13T23:52:44
#
#-------------------------------------------------

QT      += core
QT      += widgets
QT      += gui

TARGET = Book
CONFIG   += console
CONFIG   += app_bundle

TEMPLATE += app


SOURCES += main.cpp \
    bookinput.cpp \
    bookwriter.cpp \
    book.cpp

HEADERS += \
    book.h \
    bookwriter.h \
    bookinput.h
