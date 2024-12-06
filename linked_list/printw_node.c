/*
** EPITECH PROJECT, 2024
** print_node
** File description:
** print node
*/
#include <stdlib.h>
#include "my_top.h"
#include <stdio.h>
#include <curses.h>

int printw_node(node_t file)
{
    node_t temp;

    temp = file;
    while (temp != NULL) {
        printw("%5s ", temp->stat[0]);
        printw("%5.7s+ ", temp->owner_name);
        printw("%7s ", temp->stat[17]);
        printw("%7s ", temp->stat[18]);
        printw("%7s ", temp->stat[22]);
        printw("%7s ", temp->stat[23]);
        printw("%7s", "000");
        printw("%7s ", temp->stat[2]);
        printw("%7s", "00.0");
        printw("%7s", "0.0");
        printw("%7s", "00:00.00");
        printw(" %7s\n", temp->stat[1]);
        temp = temp->next;
    }
    return 0;
}
