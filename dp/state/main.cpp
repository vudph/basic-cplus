#include <iostream>
#include "MusicPlayer.h"

using namespace std;

int main()
{
    MusicPlayer player;
    player.play();
    player.pause();
    player.stop();
    player.pause();
    return 0;
}
