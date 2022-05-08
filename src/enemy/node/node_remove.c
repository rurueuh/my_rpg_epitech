/*
** EPITECH PROJECT, 2022
** test
** File description:
** node_remove
*/

#include "my_rpg.h"

node_enemy *node_remove_one(node_enemy *node)
{
    if (node_empty(node) == 1)
        return NULL;
    if (node->next == NULL){
        sfSprite_destroy(node->sprite);
        free(node);
        node = NULL;
        return NULL;
    }
    node_enemy *temp = node;
    node_enemy *before = node;
    while (temp->next != NULL){
        before = temp;
        temp = temp->next;
    }
    before->next = NULL;
    sfSprite_destroy(temp->sprite);
    free(temp);
    temp = NULL;
    return node;
}

node_enemy *node_remove(node_enemy *node, int x)
{
    while (x){
        node = node_remove_one(node);
        x -= 1;
    }
    return node;
}
