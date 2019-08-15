#include "minilibmx.h"

void play_stop_music(int play)
{
    if (play == 1)
    {
        system("afplay ./sounds/matrix.mp3 &");
    }
    else if (play == 0)
    {
        system("killall afplay");
    }
}

