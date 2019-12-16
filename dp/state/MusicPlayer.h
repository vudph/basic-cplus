#ifndef MUSICPLAYER_H
#define MUSICPLAYER_H

class MusicPlayerState;

class MusicPlayer {
public:
    enum State
    {
        ST_STOPPED,
        ST_PLAYING,
        ST_PAUSED
    };

    MusicPlayer();
    virtual ~MusicPlayer();

    void play();
    void pause();
    void stop();

    void setState(State state);

private:
    MusicPlayerState *m_pState;
};

#endif // MUSICPLAYER_H
