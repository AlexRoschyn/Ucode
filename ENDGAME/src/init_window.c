#include "minilibmx.h"

void init_window(WINDOW *wind)
{
    refresh();
    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    attron(COLOR_PAIR(1));
    wborder(wind, '|', '|', '-', '-', '.', '.', '.', '.');
    wrefresh(wind);
    keypad(wind, true);                                  //keypad 0 in win map

}

