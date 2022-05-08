/*
** EPITECH PROJECT, 2022
** test
** File description:
** node_list
*/

#include "my_rpg.h"

int node_len(node_enemy *node)
{
    int size = 0;
    if (node_empty(node) == 1)
        return 0;
    while (node){
        size += 1;
        node = node->next;
    }
    return size;
}
