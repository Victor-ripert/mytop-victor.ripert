/*
** EPITECH PROJECT, 2024
** print_node
** File description:
** print node
*/
#include <stdlib.h>
#include "my_top.h"
#include <stdio.h>

int print_node(node_t file)
{
    node_t temp;

    temp = file;
    while (temp != NULL) {
        printf("%s ", temp->stat[0]);
        printf("%s ", temp->owner_name);
        printf("%s ", temp->stat[17]);
        printf("%s ", temp->stat[18]);
        printf("%s ", temp->stat[22]);
        printf("%s ", temp->stat[23]);
        printf("SHR ");
        printf("%s ", temp->stat[2]);
        printf("CPU ");
        printf("MEM ");
        printf("TIME ");
        printf("%s\n", temp->stat[1]);
        temp = temp->next;
    }
    return 0;
}
