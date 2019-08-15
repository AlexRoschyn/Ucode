#include "minilibmx.h"

int arg2_randomaizer()
{
    int random = rand();
    while (random > 10)
    {
        random /= 10;
    }
/*
    if (random < 10)
    {
        random *= 10;
    }
*/

    return random;
}
