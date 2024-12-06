/*
** EPITECH PROJECT, 2024
** add_node
** File description:
** add_node
*/
#include <stdlib.h>
#include "my_top.h"
#include <stdio.h>

node_t add_node_stat(node_t head, char **value, char *owner)
{
    node_t temp = create_node();
    node_t p;

    temp->stat = value;
    temp->owner_name = owner;
    if (head == NULL)
        head = temp;
    if (head->stat == NULL || head->owner_name == NULL) {
        head->stat = value;
        head->owner_name = owner;
        free(temp);
        return head;
    } else {
        p = head;
        while (p->next != NULL) {
            p = p->next;
        }
            p->next = temp;
    }
    return head;
}
