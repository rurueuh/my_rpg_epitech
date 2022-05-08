/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** node_draw
*/

#include "my_rpg.h"

void draw_node(node_enemy *node, all_ruru *all)
{
    int len = 0;
    if (node_empty(node) == 1){
        return;
    }
    while (node){
        rr_window_sprite(node->sprite, all->window->window);
        len += 1;
        node = node->next;
    }
}
