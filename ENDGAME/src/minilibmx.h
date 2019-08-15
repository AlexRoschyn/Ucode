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

int set_level(int count_to_level, int level);

void init_window(WINDOW *wind);

void print_start_window(WINDOW *start);

bool mx_isdigit(int c);

void mx_printint(int n);

int calculation_result(int arg1, int arg2, char oper);

char operator_randomaizer(int remainder);

int arg2_randomaizer();

int user_result();

void play_stop_music(int play);

void print_operator(WINDOW *large_numbers,  char oper);

void digit_rain();

void end_logo();

int mx_strlen(const char *s);

#endif
