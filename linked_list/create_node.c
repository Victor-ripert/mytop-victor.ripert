/*
** EPITECH PROJECT, 2024
** create_node
** File description:
** create node
*/
#include "my_top.h"
#include <stdlib.h>

node_t create_node(void)
{
    node_t temp;

    temp = malloc(sizeof(my_process_t) * 1);
    temp->next = NULL;
    return temp;
}
