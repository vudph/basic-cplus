#ifndef STOPPEDSTATE_H
#define STOPPEDSTATE_H

#include "MusicPlayerState.h"

class MusicPlayer;

class StoppedState : public MusicPlayerState {
public:
    StoppedState();
    virtual ~StoppedState();

    virtual void play(MusicPlayer * player) override;
};


#endif // STOPPEDSTATE_H
