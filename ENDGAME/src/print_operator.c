#include "minilibmx.h"

void print_operator(WINDOW *large_numbers,  char oper) {

    int y = 1;
    int x = 1;

    if (oper == '+')
    {
        mvwprintw(large_numbers, y, x,     "         "); //Размер y = 7; x = 9;
        mvwprintw(large_numbers, y + 1, x, "    #    ");
        mvwprintw(large_numbers, y + 2, x, "    #    ");
        mvwprintw(large_numbers, y + 3, x, " ####### ");
        mvwprintw(large_numbers, y + 4, x, "    #    ");
        mvwprintw(large_numbers, y + 5, x, "    #    ");
        mvwprintw(large_numbers, y + 6, x, "         ");
    }

    if (oper == '-')
    {
	mvwprintw(large_numbers, y, x,     "        ");    //Размер y = 7; x = 8;
 	mvwprintw(large_numbers, y + 1, x, "        ");
 	mvwprintw(large_numbers, y + 2, x, "        ");
 	mvwprintw(large_numbers, y + 3, x, " ###### ");
 	mvwprintw(large_numbers, y + 4, x, "        ");
 	mvwprintw(large_numbers, y + 5, x, "        ");
 	mvwprintw(large_numbers, y + 6, x, "        ");
     }

    if (oper == '=')
    {
	mvwprintw(large_numbers, y, x,     "        ");   //Размер y = 7; x = 8;
 	mvwprintw(large_numbers, y + 1, x, "        ");
 	mvwprintw(large_numbers, y + 2, x, " ###### ");
 	mvwprintw(large_numbers, y + 3, x, "        ");
 	mvwprintw(large_numbers, y + 4, x, " ###### ");
 	mvwprintw(large_numbers, y + 5, x, "        ");
 	mvwprintw(large_numbers, y + 6, x, "        ");
    }
    if (oper == '/')
    {
      	mvwprintw(large_numbers, y, x,    "      ");      //Размер y = 7; x = 6;
 	mvwprintw(large_numbers, y + 1, x,"      ");
 	mvwprintw(large_numbers, y + 2, x,"    ##");
 	mvwprintw(large_numbers, y + 3, x,"  ##  ");
 	mvwprintw(large_numbers, y + 4, x,"##    ");
 	mvwprintw(large_numbers, y + 5, x,"      ");
 	mvwprintw(large_numbers, y + 6, x,"      ");
     }
    if (oper == '*')
    {
	mvwprintw(large_numbers,y, x,     "         ");  //Размер y = 7; x = 9;
 	mvwprintw(large_numbers,y + 1, x, "##     ##");
 	mvwprintw(large_numbers,y + 2, x, "  ## ##  ");
 	mvwprintw(large_numbers,y + 3, x, "   ###   ");
 	mvwprintw(large_numbers,y + 4, x, "  ## ##  ");
 	mvwprintw(large_numbers,y + 5, x, "##     ##");
 	mvwprintw(large_numbers,y + 6, x, "         ");
     }
}

