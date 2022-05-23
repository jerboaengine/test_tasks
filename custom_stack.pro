TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

macx: LIBS += -L$$PWD/lib/custom_stack/ -lcustom_stack

INCLUDEPATH += $$PWD/lib/custom_stack
DEPENDPATH += $$PWD/lib/custom_stack
