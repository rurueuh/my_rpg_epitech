/*
** EPITECH PROJECT, 2022
** test
** File description:
** node_print
*/

#include "my_rpg.h"

void node_print(node_enemy *node)
{
    int len = 0;
    if (node_empty(node) == 1){
        my_printf("node null\n");
        return;
    }
    while (node){
        my_printf("node[%d] = %d\n", len, node->enemy_number);
        len += 1;
        node = node->next;
    }
}
