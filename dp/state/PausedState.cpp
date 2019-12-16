#include "PausedState.h"
#include "MusicPlayer.h"

PausedState::PausedState() : MusicPlayerState(std::string("Paused")) {
}

PausedState::~PausedState() {
}

void PausedState::play(MusicPlayer * player) {
    player->setState(MusicPlayer::ST_PLAYING);
}

void PausedState::stop(MusicPlayer * player) {
    player->setState(MusicPlayer::ST_STOPPED);
}
