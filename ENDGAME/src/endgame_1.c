#include "minilibmx.h"

void init(WINDOW *map, WINDOW *numbers)
{
    refresh();
    
    wborder(map, '|', '|', '-', '-', '.', '.', '.', '.');
    wrefresh(map);
    wborder(numbers, '|', '|', '-', '-', '.', '.', '.', '.');
    wrefresh(numbers);
    keypad(map, true);                                  //keypad 0 in win map
    
    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);

    // printf("Print");
}

void init_ncursis()
{
    initscr();
    noecho();
    cbreak();
    curs_set(FALSE);
}


int main() {

    init_ncursis();
    WINDOW *map = create_newwin(35, 100, 0, 0);				//основне окно
    WINDOW *numbers = create_newwin(6, 20, 28, 45);	
    init(map, numbers);

    int arg1;
    int arg2;
    char operator;
    int result;
    int u_result;
    int count = 20;
    int remainder = 4;
    int level = 0;
    int count_to_level = 0;				//увеличения уровня после 5
    bool new_chain = true;
     srand(time(NULL)); 

 //   mvprintw(5,0,"Enter your i.d. followed by the department name:\n");
 //   refresh();
//    scanw("%d", &u_result); // input user
      int k = 0;
//    unsigned int _usleep = 40000;

    while (count > 0)
    {
       if (new_chain)
       {
            refresh();
            mvwprintw(map, 8, 50, "%s",  "              ");
            mvwprintw(map, 1, 1, "%s",  "              ");
            wclear(numbers);
            arg1 = arg2_randomaizer();
            arg2 = arg2_randomaizer();
            operator = operator_randomaizer(2);
           // mvwprintw(numbers, 1, 1, "arg1 = %d", arg1);
            mvwprintw(numbers, 2, 1, "%d %c %d", arg1, operator, arg2);
            wrefresh(numbers);
            scanw("%d", &u_result); // input user
            result = calculation_result(arg1, arg2, operator);
            wrefresh(numbers);
            arg1 = result;
            count--;

            if (u_result == result)
            {
                count_to_level++;
                level = (count_to_level == 3) ? level + 1 : level;
                mvwprintw(map, 1, 1,  "level = %d", level);
                new_chain = false;
            }
            else
            {
                mvwprintw(map, 8, 50, "%s", "error");
                 //  wrefresh(map);
                count_to_level = 0;
                level = (level <= 0) ? 0 : level -1;
                new_chain = true;
            }
        }
        else if (new_chain == false) 
        {
            refresh();
            mvwprintw(map, 8, 50, "%s",  "              ");
            wclear(numbers);
            // wrefresh(numbers);
            arg1 = arg2_randomaizer();
            arg2 = arg2_randomaizer();
            operator = operator_randomaizer(2);
//          mvwprintw(numbers, 1, 1, "arg1 = %d", arg1);
            mvwprintw(numbers, 2, 1,  "%c %d",  operator, arg2);
            wrefresh(numbers);
//          mvprintw(7,0,"u_result.: %d, \n", u_result);
//          refresh();
            scanw("%d", &u_result); // input user
            result = calculation_result(arg1, arg2, operator);
//          mvwprintw(numbers, 3, 1, "user_result= %d", u_result);
//          mvwprintw(numbers, 4, 1, "result = %d", result);
//          mvwprintw(numbers, 6, 1, "count = %d", count);
            wrefresh(numbers);
            arg1 = result;
            count--;
            
            if (u_result == result)
            {
                count_to_level++;
                level = (count_to_level == 3) ? level + 1 : level;
                mvwprintw(map, 1, 1,  "level = %d", level);
               // new_chain = false;
            }            
            else
            {
                mvwprintw(map, 8, 50, "%s", "error");
                count_to_level = 0;
                level = (level <= 0) ? 0 : level -1;
                new_chain = true;     
       }

      }
         wrefresh(map);
         wrefresh(numbers);
    }
//    count score
 
    play_stop_music(1);

    mvwprintw(map,10, 5, "%s", "END GAME");
    wrefresh(map);

    msleep(2000);

    end_logo();
    getch();

    play_stop_music(0);

    endwin();                   /* End curses mode                */
    // system("Leaks a.out");
    return 0;

}
