#include <ncurses.h>
#include <string.h>

void number0() {

	initscr();
	curs_set(0);
	char *str = " #### ";
 	char *str1 = "##  ##";
 	char *str2 = "##  ##";
 	char *str3 = "##  ##";
 	char *str4 = "##  ##";
 	char *str5 = "##  ##";
 	char *str6 = " #### ";
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

void number1() {

	initscr();
	curs_set(0);
	char *str = " ###  ";
 	char *str1 = "####  ";
 	char *str2 = "  ##  ";
 	char *str3 = "  ##  ";
 	char *str4 = "  ##  ";
 	char *str5 = "  ##  ";
 	char *str6 = "######";
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

void number2() {

	initscr();
	curs_set(0);
	char *str = " #### ";
 	char *str1 = "##  ##";
 	char *str2 = "   ## ";
 	char *str3 = "  ##  ";
 	char *str4 = " ##   ";
 	char *str5 = "##  ##";
 	char *str6 = "######";
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

void number3() {

	initscr();
	curs_set(0);
	char *str = " #### ";
 	char *str1 = "##  ##";
 	char *str2 = "    ##";
 	char *str3 = "   ## ";
 	char *str4 = "    ##";
 	char *str5 = "##  ##";
 	char *str6 = " #### ";
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

void number4() {

	initscr();
	curs_set(0);
	char *str = "   ###";
 	char *str1 = "  ####";
 	char *str2 = " ## ##";
 	char *str3 = "##  ##";
 	char *str4 = "######";
 	char *str5 = "    ##";
 	char *str6 = "    ##";
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

void number5() {

	initscr();
	curs_set(0);
	char *str = "######";
 	char *str1 = "##    ";
 	char *str2 = "##    ";
 	char *str3 = "##### ";
 	char *str4 = "    ##";
 	char *str5 = "##  ##";
 	char *str6 = "##### ";
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

void number6() {

	initscr();
	curs_set(0);
	char *str = " #### ";
 	char *str1 = "##  ##";
 	char *str2 = "##    ";
 	char *str3 = "##### ";
 	char *str4 = "##  ##";
 	char *str5 = "##  ##";
 	char *str6 = " #### ";
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

void number7() {

	initscr();
	curs_set(0);
	char *str = "######";
 	char *str1 = "######";
 	char *str2 = "  ##  ";
 	char *str3 = " ##   ";
 	char *str4 = "##    ";
 	char *str5 = "##    ";
 	char *str6 = "##    ";
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

void number8() {

	initscr();
	curs_set(0);
	char *str = " #### ";
 	char *str1 = "##  ##";
 	char *str2 = "##  ##";
 	char *str3 = " #### ";
 	char *str4 = "##  ##";
 	char *str5 = "##  ##";
 	char *str6 = " #### ";
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

void number9() {

	initscr();
	curs_set(0);
	char *str = " #### ";
 	char *str1 = "##  ##";
 	char *str2 = "##  ##";
 	char *str3 = " #####";
 	char *str4 = "    ##";
 	char *str5 = "    ##";
 	char *str6 = " #### ";
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
