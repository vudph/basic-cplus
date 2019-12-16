#ifndef PLAYINGSTATE_H
#define PLAYINGSTATE_H

#include "MusicPlayerState.h"

class PlayingState : public MusicPlayerState {
public:
    PlayingState();
    virtual ~PlayingState();
    virtual void pause(MusicPlayer *player) override;
    virtual void stop(MusicPlayer *player) override;
};

#endif // PLAYINGSTATE_H
