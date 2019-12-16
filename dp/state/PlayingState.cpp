#include "PlayingState.h"
#include "MusicPlayer.h"

PlayingState::PlayingState() : MusicPlayerState(std::string("Playing")) {
}

PlayingState::~PlayingState() {
}

void PlayingState::pause(MusicPlayer * player) {
    player->setState(MusicPlayer::ST_PAUSED);
}

void PlayingState::stop(MusicPlayer * player) {
    player->setState(MusicPlayer::ST_STOPPED);
}
