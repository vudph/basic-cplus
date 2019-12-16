#include "StoppedState.h"
#include "MusicPlayer.h"

StoppedState::StoppedState() : MusicPlayerState(std::string("Stopped")) {
}

StoppedState::~StoppedState() {
}

void StoppedState::play(MusicPlayer * player) {
    player->setState(MusicPlayer::ST_PLAYING);
}
