TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        DrawCanvas.cpp \
        DrawStrategy.cpp \
        DrawingCircle.cpp \
        LineDrawing.cpp \
        main.cpp

HEADERS += \
    CircleDrawing.h \
    DrawCanvas.h \
    DrawStrategy.h \
    LineDrawing.h
