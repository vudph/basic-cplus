#ifndef MUSICPLAYERSTATE_H
#define MUSICPLAYERSTATE_H
#include <string>

class MusicPlayer;

class MusicPlayerState {
public:
    MusicPlayerState(std::string name);
    virtual ~MusicPlayerState();

    virtual void play(MusicPlayer *player);
    virtual void pause(MusicPlayer *player);
    virtual void stop(MusicPlayer *player);

    std::string getName() {
        return m_name;
    }

private:
    std::string m_name;
};
#endif // MUSICPLAYERSTATE_H
