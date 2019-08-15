#include "minilibmx.h"

int set_level(int count_to_level, int level) {

    if (count_to_level ==  3) {
        count_to_level = 0;
        level++;
    }
    return level;
}

