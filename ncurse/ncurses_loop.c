/*
** EPITECH PROJECT, 2024
** my_put_nbr
** File description:
** desc
*/
#include "my_top.h"
#include <stdio.h>
#include <curses.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

int ncurse_loop(void)
{
    WINDOW *win;
    node_t top_process = get_stat();

    win = initscr();
    nodelay(win, TRUE);
    while (!isendwin()) {
        wclear(stdscr);
        printw_node(top_process);
        sleep(1);
        refresh();
        if (getch() == 'q') {
            endwin();
            printf("Closed\n");
        }
    }
    rm_node(top_process);
}
