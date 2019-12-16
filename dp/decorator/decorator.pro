TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        HorizontalScrollBarDecorator.cpp \
        SimpleWindow.cpp \
        VerticalScrollBarDecorator.cpp \
        Window.cpp \
        WindowDecorator.cpp \
        main.cpp

HEADERS += \
    HorizontalScrollBarDecorator.h \
    SimpleWindow.h \
    VerticalScrollBarDecorator.h \
    Window.h \
    WindowDecorator.h
