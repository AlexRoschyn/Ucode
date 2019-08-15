#include "minilibmx.h"

void print_start_window(WINDOW *start) {
 
    char c1 ='+';
    int left1, right1, top1, bottom1, tlc1, trc1, blc1, brc1;
    left1 = right1 = top1 = bottom1 =  45;
    tlc1 = trc1 = blc1 = brc1 = (int)c1;

    char *text1 = "Wake up, Neo..";
    char *text2 = "The Matrix has you..";
    char *text3 = "Follow the white rabbit";
    char *text4 = "Knock, knock, Neo";
    char *text5 = "Are you ready to start? y/n";
    char *str =  " /$$$      /$$$   /$$$$   /$$$$$$$  /$$$$$$$ /$$$$$$$    / $$$$   ";
    char *str1 = "| $$$$    /$$$$ / $$$$$$ | $$$_/$$$| $$$$$$$| $$$_/$$$ / $$$$$$$$ ";
    char *str2 = "| $$$$$  /$$$$$| $$$_/$$$| $$$ |$$$| $$$___/| $$$| $$$| $$$__/$$$ ";
    char *str3 = "| $$$ $$ $$ $$$| $$$| $$$| $$$$$$/ | $$$$$  | $$$$$$$/ \\ $$$|_/  ";
    char *str4 = "| $$$  $$$| $$$| $$$$$$$$| $$$_/$$$| $$$_/  | $$$_/$$$   \\  $$$  ";
    char *str5 = "| $$$/__/ | $$$| $$$| $$$| $$$ |$$$| $$$$$$$| $$$| $$$ /$$$ \\ $$$";
    char *str6 = "| $$$     | $$$| $$$| $$$| $$$$$$$ | $$$$$$$| $$$| $$$\\  $$$$$$$ ";
    char *str7 = "|/__/     |/__/|/__/|/__/|/_____/  |/______/|/__/|/__/  \\_____/  ";

    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);

    for( int i = 0; i < mx_strlen(str); i++) {
//        msleep(100);
        mvwprintw(start, 1, 15, &str[0]);
//        wrefresh(start);
    }
    refresh();
    for( int i = 0; i < mx_strlen(str1); i++){
        mvwprintw(start, 2, 15, &str1[0]);
        wrefresh(start);
    }
    refresh();
    for( int i = 0; i < mx_strlen(str2); i++){
        mvwprintw(start, 3, 15, &str2[0]);
        wrefresh(start);
    }
    refresh();
    for( int i = 0; i < mx_strlen(str3); i++){
        mvwprintw(start, 4, 15, &str3[0]);
        wrefresh(start);
    }
    refresh();
    for( int i = 0; i < mx_strlen(str4); i++){
        mvwprintw(start, 5, 15, &str4[0]);
        wrefresh(start);
    }
    refresh();
    for( int i = 0; i < mx_strlen(str5); i++){
        mvwprintw(start, 6, 15, &str5[0]);
        wrefresh(start);
    }
    refresh();
    for( int i = 0; i < mx_strlen(str6); i++){
        mvwprintw(start, 7, 15, &str6[0]);
        wrefresh(start);
    }
    refresh();
    for( int i = 0; i < mx_strlen(str7); i++){
        mvwprintw(start, 8, 15, &str7[0]);
        wrefresh(start);
    }
    refresh();
    for( int i = 0; i < mx_strlen(text1); i++){
        msleep(100);
        mvwprintw(start, 10, 40, &text1[0]);
        wrefresh(start);
    }
    msleep(200);
    refresh();
    for( int i = 0; i < mx_strlen(text2); i++){
        msleep(100);
        wborder(start, '|', '|', '-', '-', '.', '.', '.', '.');
        mvwprintw(start, 11, 40, "%s", &text2[0]);
        wrefresh(start);
    }
    msleep(200);
    refresh();
    for( int i = 0; i < mx_strlen(text3); i++){
        wborder(start, '|', '|', '-', '-', '.', '.', '.', '.');
        msleep(100);
        mvwprintw(start, 12, 40, "%s", &text3[0]);
        wrefresh(start);
    }
    msleep(200);
    refresh();
    for( int i = 0; i < mx_strlen(text4); i++){
        wborder(start, '|', '|', '-', '-', '.', '.', '.', '.');
        msleep(100);
        mvwprintw(start, 13, 40, "%s", &text4[0]);
        wrefresh(start);
    }
    msleep(200);
    refresh();
    for( int i = 0; i < mx_strlen(text5); i++){
        msleep(100);
        wborder(start, '|', '|', '-', '-', '.', '.', '.', '.');
        mvwprintw(start, 14, 40, "%s", &text5[0]);
        wrefresh(start);
        }
    msleep(200);
    refresh();

}

