include(../Hello/Hello.pri)
include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG += thread

HEADERS +=    

SOURCES +=     main.cpp \
    hellotest.cpp
