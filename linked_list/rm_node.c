/*
** EPITECH PROJECT, 2024
** add_node
** File description:
** add_node
*/
#include <stdlib.h>
#include "my_top.h"
#include <stdio.h>

int rm_node(node_t head)
{
    node_t p;

    if (head == NULL) {
        return -1;
    } else {
        p = head;
        while (p->next != NULL) {
            p = p->next;
        }
        free(p->stat);
        free(p->owner_name);
        free(p);
    }
    return 0;
}
