#include "minilibmx.h"
 
void end_logo() 
{
    initscr();
    curs_set(0);
    
    for(int i = 1; i <= 35; i++)
    {   
      printw("segmentation fault... \n");
      msleep(200);                  
      refresh();
   }
  
    digit_rain();
    endwin();                   
}
