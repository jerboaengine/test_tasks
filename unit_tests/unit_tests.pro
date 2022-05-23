include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

SOURCES += \
        custom_stack_tests.cpp \
        main.cpp        
