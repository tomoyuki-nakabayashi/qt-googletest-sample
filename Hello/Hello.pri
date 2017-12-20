QT -= gui
QT += testlib

CONFIG += c++11 console
CONFIG -= app_bundle
DEFINES += QT_DEPRECATED_WARNINGS

SRC_DIR = $$PWD
HEAD_DIR = $$PWD
FORM_DIR = $$PWD

INCLUDEPATH *= \
    $$HEAD_DIR

SOURCES += \
    $$SRC_DIR/counter.cpp

HEADERS += \
    $$HEAD_DIR/counter.h
