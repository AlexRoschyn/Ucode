#include <ncurses.h>
#include <string.h>

void character0() {

	initscr();
	curs_set(0);
	char *str = "         ";
 	char *str1 = "    #    ";
 	char *str2 = "    #    ";
 	char *str3 = " ####### ";
 	char *str4 = "    #    ";
 	char *str5 = "    #    ";
 	char *str6 = "         ";
 	int x = (COLS - strlen(str)) / 2;
    int y = (LINES - 8) / 2;
	mvprintw(y, x, str);
 	mvprintw(y + 1, x, str1);
 	mvprintw(y + 2, x, str2);
 	mvprintw(y + 3, x, str3);
 	mvprintw(y + 4, x, str4);
 	mvprintw(y + 5, x, str5);
 	mvprintw(y + 6, x, str6);
 	refresh();
 	getch();
 	endwin();
}

void character1() {

	initscr();
	curs_set(0);
	char *str = "        ";
 	char *str1 = "        ";
 	char *str2 = "         ";
 	char *str3 = " ###### ";
 	char *str4 = "         ";
 	char *str5 = "         ";
 	char *str6 = "         ";
 	int x = (COLS - strlen(str)) / 2;
    int y = (LINES - 8) / 2;
	mvprintw(y, x, str);
 	mvprintw(y + 1, x, str1);
 	mvprintw(y + 2, x, str2);
 	mvprintw(y + 3, x, str3);
 	mvprintw(y + 4, x, str4);
 	mvprintw(y + 5, x, str5);
 	mvprintw(y + 6, x, str6);
 	refresh();
 	getch();
 	endwin();
}

void character2() {

	initscr();
	curs_set(0);
	char *str = "         ";
 	char *str1 = "        ";
 	char *str2 = " ###### ";
 	char *str3 = "        ";
 	char *str4 = " ###### ";
 	char *str5 = "        ";
 	char *str6 = "        ";
 	int x = (COLS - strlen(str)) / 2;
    int y = (LINES - 8) / 2;
	mvprintw(y, x, str);
 	mvprintw(y + 1, x, str1);
 	mvprintw(y + 2, x, str2);
 	mvprintw(y + 3, x, str3);
 	mvprintw(y + 4, x, str4);
 	mvprintw(y + 5, x, str5);
 	mvprintw(y + 6, x, str6);
 	refresh();
 	getch();
 	endwin();
}

void character3() {

	initscr();
	curs_set(0);
	char *str = "         ";
 	char *str1 = "        ";
 	char *str2 = "    ##";
 	char *str3 = "  ##  ";
 	char *str4 = "##    ";
 	char *str5 = "        ";
 	char *str6 = "        ";
 	int x = (COLS - strlen(str)) / 2;
    int y = (LINES - 8) / 2;
	mvprintw(y, x, str);
 	mvprintw(y + 1, x, str1);
 	mvprintw(y + 2, x, str2);
 	mvprintw(y + 3, x, str3);
 	mvprintw(y + 4, x, str4);
 	mvprintw(y + 5, x, str5);
 	mvprintw(y + 6, x, str6);
 	refresh();
 	getch();
 	endwin();
}

void character4() {

	initscr();
	curs_set(0);
	char *str = "         ";
 	char *str1 = "##     ##";
 	char *str2 = "  ## ##  ";
 	char *str3 = "   ###   ";
 	char *str4 = "  ## ##  ";
 	char *str5 = "##     ##";
 	char *str6 = "        ";
 	int x = (COLS - strlen(str)) / 2;
    int y = (LINES - 8) / 2;
	mvprintw(y, x, str);
 	mvprintw(y + 1, x, str1);
 	mvprintw(y + 2, x, str2);
 	mvprintw(y + 3, x, str3);
 	mvprintw(y + 4, x, str4);
 	mvprintw(y + 5, x, str5);
 	mvprintw(y + 6, x, str6);
 	refresh();
 	getch();
 	endwin();
}

void character5() {

	initscr();
	curs_set(0);
	char *str = "         ";
 	char *str1 = "    #    ";
 	char *str2 = "   #@#   ";
 	char *str3 = "  #@@@#  ";
 	char *str4 = " #@@@@@# ";
 	char *str5 = "#########";
 	char *str6 = "        ";
 	int x = (COLS - strlen(str)) / 2;
    int y = (LINES - 8) / 2;
	mvprintw(y, x, str);
 	mvprintw(y + 1, x, str1);
 	mvprintw(y + 2, x, str2);
 	mvprintw(y + 3, x, str3);
 	mvprintw(y + 4, x, str4);
 	mvprintw(y + 5, x, str5);
 	mvprintw(y + 6, x, str6);
 	refresh();
 	getch();
 	endwin();
}

void character6() {

	initscr();
	curs_set(0);
	char *str = "         ";
 	char *str1 = "#########";
 	char *str2 = "#@@@@@@@#";
 	char *str3 = "#@@@@@@@#";
 	char *str4 = "#@@@@@@@#";
 	char *str5 = "#########";
 	char *str6 = "        ";
 	int x = (COLS - strlen(str)) / 2;
    int y = (LINES - 8) / 2;
	mvprintw(y, x, str);
 	mvprintw(y + 1, x, str1);
 	mvprintw(y + 2, x, str2);
 	mvprintw(y + 3, x, str3);
 	mvprintw(y + 4, x, str4);
 	mvprintw(y + 5, x, str5);
 	mvprintw(y + 6, x, str6);
 	refresh();
 	getch();
 	endwin();
}

void character7() {

	initscr();
	curs_set(0);
	char *str = "         ";
 	char *str1 = "    #    ";
 	char *str2 = "  #@@@#  ";
 	char *str3 = "#@@@@@@@#";
 	char *str4 = "  #@@@#  ";
 	char *str5 = "    #    ";
 	char *str6 = "        ";
 	int x = (COLS - strlen(str)) / 2;
    int y = (LINES - 8) / 2;
	mvprintw(y, x, str);
 	mvprintw(y + 1, x, str1);
 	mvprintw(y + 2, x, str2);
 	mvprintw(y + 3, x, str3);
 	mvprintw(y + 4, x, str4);
 	mvprintw(y + 5, x, str5);
 	mvprintw(y + 6, x, str6);
 	refresh();
 	getch();
 	endwin();
}

void character8() {

	initscr();
	curs_set(0);
	char *str = "         ";
 	char *str1 = "   @@@@   ";
 	char *str2 = " @@@@@@@@ ";
 	char *str3 = "@@@@@@@@@@";
 	char *str4 = " @@@@@@@@ ";
 	char *str5 = "   @@@@   ";
 	char *str6 = "        ";
 	int x = (COLS - strlen(str)) / 2;
    int y = (LINES - 8) / 2;
	mvprintw(y, x, str);
 	mvprintw(y + 1, x, str1);
 	mvprintw(y + 2, x, str2);
 	mvprintw(y + 3, x, str3);
 	mvprintw(y + 4, x, str4);
 	mvprintw(y + 5, x, str5);
 	mvprintw(y + 6, x, str6);
 	refresh();
 	getch();
 	endwin();
}

/*
void character(int y, int x) {
	mvprintw(y, x,     "  ##  ");
 	mvprintw(y + 1, x, "   ## ");
 	mvprintw(y + 2, x, "    # ");
 	mvprintw(y + 3, x, "    # ");
 	mvprintw(y + 4, x, "    # ");
 	mvprintw(y + 5, x, "   ## ");
 	mvprintw(y + 6, x, "  ##  ");
}

void character(int y, int x) {
	mvprintw(y, x,     "  ##  ");
 	mvprintw(y + 1, x, " ##   ");
 	mvprintw(y + 2, x, " #    ");
 	mvprintw(y + 3, x, " #    ");
 	mvprintw(y + 4, x, " #    ");
 	mvprintw(y + 5, x, " ##   ");
 	mvprintw(y + 6, x, "  ##  ");
}
*/