#ifndef PAUSEDSTATE_H
#define PAUSEDSTATE_H

#include "MusicPlayerState.h"

class MusicPlayer;

class PausedState : public MusicPlayerState {
public:
        PausedState();
        virtual ~PausedState();

        virtual void play(MusicPlayer * player) override;
        virtual void stop(MusicPlayer * player) override;
};

#endif // PAUSEDSTATE_H
