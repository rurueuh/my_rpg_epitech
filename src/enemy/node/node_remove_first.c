/*
** EPITECH PROJECT, 2022
** test
** File description:
** node_remove_first
*/

#include "my_rpg.h"

node_enemy *remove_first(node_enemy *node)
{
    if (node_empty(node) == 1)
        return NULL;
    if (node->next == NULL)
        return NULL;
    node_enemy *temp = node;
    node = node->next;
    sfSprite_destroy(temp->sprite);
    free(temp);
    return node;
}
