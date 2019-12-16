TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        MusicPlayer.cpp \
        MusicPlayerState.cpp \
        PausedState.cpp \
        PlayingState.cpp \
        StoppedState.cpp \
        main.cpp

HEADERS += \
    MusicPlayer.h \
    MusicPlayerState.h \
    PausedState.h \
    PlayingState.h \
    StoppedState.h
