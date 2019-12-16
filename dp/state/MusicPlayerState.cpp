#include "MusicPlayerState.h"

#include <iostream>

MusicPlayerState::MusicPlayerState(std::string name): m_name(name)
{

}

MusicPlayerState::~MusicPlayerState() {
}

void MusicPlayerState::play(MusicPlayer * player) {
    std::cout << "Illegal state transition from " << getName() << " to Playing\n";
}

void MusicPlayerState::pause(MusicPlayer * player) {
    std::cout << "Illegal state transition from " << getName() << " to Paused\n";
}

void MusicPlayerState::stop(MusicPlayer * player) {
    std::cout << "Illegal state transition from " << getName() << " to Stopped\n";
}
