#include "minilibmx.h"

void init_ncursis()
{
    initscr();
    noecho();
    cbreak();
    curs_set(FALSE);
}

int main() {

    init_ncursis();
    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
 
    WINDOW *start = create_newwin(35, 100, 0, 0);
    init_window(start);
    print_start_window(start);
    while(getch() == 'y') {
        clear();
        refresh();
    }  
    endwin();

    WINDOW *map = create_newwin(35, 100, 0, 0);			//основне окно
    WINDOW *numbers = create_newwin(6, 20, 28, 45);
    WINDOW *large_numbers = create_newwin(10, 33, 10, 30);
    init_window(map);
    init_window(numbers);
    init_window(large_numbers);

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

 // mvprintw(5,0,"Enter your i.d. followed by the department name:\n");
 // refresh();
//  scanw("%d", &u_result); // input user
    int k = 0;
//  unsigned int _usleep = 40000;

    while (count > 0)
    {
       if (new_chain == true)
       {
            refresh();
            mvwprintw(map, 8, 50, "%s",  "              ");
            mvwprintw(map, 1, 1,  "%s",  "                                              ");
            wclear(numbers);
            wclear(large_numbers);
            arg1 = arg2_randomaizer();
            arg2 = arg2_randomaizer();
            operator = operator_randomaizer(2);
            print_operator (large_numbers, operator);
            wrefresh(large_numbers);
           // mvwprintw(numbers, 1, 1, "arg1 = %d", arg1);
            mvwprintw(numbers, 2, 1, "%d %c %d", arg1, operator, arg2);
            wrefresh(numbers);
            scanw("%d", &u_result); 						// input user
            result = calculation_result(arg1, arg2, operator);
            wrefresh(numbers);
            wrefresh(large_numbers);
            count--;

            if (u_result == result)
            {   
                arg1 = result;
                count_to_level++;
               // set_level(count_to_level, level);
                count_to_level++;
                    if (count_to_level == 3)
                    {
                        count_to_level = 0;
                        level +=1;
                    }
                mvwprintw(map, 1, 1,  "level = %d", level);
                mvwprintw(map, 1, 30,  "count_to_level = %d", count_to_level);
                wrefresh(numbers);
                new_chain = false;
            }
            else
            {
                count_to_level = 0;
		level = (level <= 0) ? 0 : level -1;
                mvwprintw(map, 8, 50, "%s", "error");
                mvwprintw(map, 1, 1,  "level = %d", level);
                mvwprintw(map, 1, 30,  "count_to_level = %d", count_to_level);
                wrefresh(numbers);
                new_chain = true;
            }
        }
        else
        {
            refresh();
            mvwprintw(map, 8, 50, "%s",  "              ");
            wclear(numbers);
            wclear(large_numbers);
            arg2 = arg2_randomaizer();
            operator = operator_randomaizer(2);
            print_operator (large_numbers, operator);
//          mvwprintw(numbers, 1, 1, "arg1 = %d", arg1);
            mvwprintw(numbers, 2, 1,  "%c %d",  operator, arg2);
            wrefresh(numbers);
//          mvprintw(7,0,"u_result.: %d, \n", u_result);
            scanw("%d", &u_result); // input user
            result = calculation_result(arg1, arg2, operator);
//          mvwprintw(numbers, 3, 1, "user_result= %d", u_result);
//          mvwprintw(numbers, 4, 1, "result = %d", result);
//          mvwprintw(numbers, 6, 1, "count = %d", count);
            wrefresh(numbers);
            wrefresh(large_numbers);
            count--;
            
            if (u_result == result)
            {
                arg1 = result;
                count_to_level++;
                    if (count_to_level == 3)
                    {
                        count_to_level = 0;
                        level +=1;
                    }  
               // set_level(count_to_level, level);
                mvwprintw(map, 1, 1,  "level = %d", level);
                mvwprintw(map, 1, 30,  "count_to_level = %d", count_to_level);
                wrefresh(numbers);
                new_chain = false;
            }            
            else
            {
                count_to_level = 0;
                level = (level <= 0) ? 0 : level -1;
                mvwprintw(map, 8, 50, "%s", "error");
                mvwprintw(map, 1, 1,  "level = %d", level);
                mvwprintw(map, 1, 30,  "count_to_level = %d", count_to_level);
                wrefresh(numbers);
                new_chain = true;
            }
      }
         wrefresh(map);
         wrefresh(numbers);
    }
//    count score
    play_stop_music(1);				// play music
    mvwprintw(map,10, 5, "%s", "END GAME");	// end 
    wrefresh(map); 
    msleep(2000);
    end_logo(); 				//screensaver

    int z = getch();
    if (z == KEY_F(1)) {
         play_stop_music(0);
         endwin();                   /* End curses mode                */
         exit(0);
     }
   system("Leaks a.out");
    return 0;
}
