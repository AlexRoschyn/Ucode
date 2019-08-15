#ifndef MINILIBMX_H
#define MINILIBMX_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <stdio.h>
# include <fcntl.h>
# include <ncurses.h>
# include <time.h>

#define msleep(msec) usleep(msec * 1000)

#define TIMER_LIMIT 5

WINDOW *create_newwin(int height, int width, int starty, int startx);

bool mx_isdigit(int c);

void mx_printint(int n);

int calculation_result(int arg1, int arg2, char oper);

char operator_randomaizer(int remainder);

int arg2_randomaizer();

int user_result();

void print_operator(int y, int x, char oper);

void play_stop_music(int play);

void character0(int y, int x);
void character1(int y, int x);
void character2(int y, int x);
void character3(int y, int x);
void character4(int y, int x);
void character5(int y, int x);
void character6(int y, int x);
void character7(int y, int x);
void character8(int y, int x);

void digit_rain();

void end_logo();


#endif
