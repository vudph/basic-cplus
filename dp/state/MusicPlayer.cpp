#include <iostream>
#include "MusicPlayer.h"
#include "StoppedState.h"
#include "PlayingState.h"
#include "PausedState.h"

MusicPlayer::MusicPlayer() : m_pState(new StoppedState()){

}

MusicPlayer::~MusicPlayer() {
    delete m_pState;
}

void MusicPlayer::play() {
    m_pState->play(this);
}

void MusicPlayer::pause() {
    m_pState->pause(this);
}

void MusicPlayer::stop() {
    m_pState->stop(this);
}

void MusicPlayer::setState(State state) {
    std::cout << "changing from " << m_pState->getName() << " to ";
    delete m_pState;

    if(state == ST_STOPPED) {
        m_pState = new StoppedState();
    } else if(state == ST_PLAYING) {
        m_pState = new PlayingState();
    } else {
        m_pState = new PausedState();
    }

    std::cout << m_pState->getName() << " state\n";
}
