#include "minilibmx.h"

void digit_rain() 
{
    initscr();    
    start_color();
    
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    init_pair(2, COLOR_WHITE, COLOR_BLACK);    

    wbkgd(stdscr, COLOR_PAIR(1));

    int max_y = 0, max_x = 0;    
    getmaxyx(stdscr, max_y, max_x);
    noecho();
    curs_set(FALSE);
    
    int startpos[max_x];
    int lenght[max_x];
    int curpos[max_x];

    for (int i = 0; i < max_x; i++) 
    {
        startpos[i] = -1 * (rand() % 80 );
        curpos[i] = startpos[i];
        lenght[i] = rand() % 50  - 1;
    }
    
    while (1) 
    {
        for (int i = 0; i < max_x; i++) 
        {
            attron(A_BOLD);
        
            char random_char = (rand() % 93 + 33);     // мiняемо дiапазон мiж вертикальними строками
            
            if (i % 2 == 0) 
            {
                random_char = '0';    // символ 0
            }
            if (i % 2 == 1)
            {
                random_char = '1';    // символ 1
            }

            attroff(COLOR_PAIR(1));
            attron(COLOR_PAIR(2));
            mvaddch(curpos[i] + 1, i, random_char);
            attroff(COLOR_PAIR(2));
            attron(COLOR_PAIR(1));        
            mvaddch(curpos[i], i, random_char);
            mvaddch(curpos[i] - lenght[i], i, ' ');
            if (curpos[i] - lenght[i] > max_y) 
            {
                curpos[i] = startpos[i];
            }
            curpos[i]++;
        }        
        
        msleep(80);
        refresh();
    }
    
    getch();
    endwin();
}
