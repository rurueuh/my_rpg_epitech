/*
** EPITECH PROJECT, 2022
** test
** File description:
** node_remove_mid
*/

#include "my_rpg.h"

void remove_enemy_midlist_setting(node_enemy *temp)
{
    sfSprite_destroy(temp->sprite);
    free(temp);
}

node_enemy *remove_node_id(node_enemy *node, int enemy_number)
{
    if (node_empty(node) == 1)
        return NULL;
    node_enemy *temp = node;
    node_enemy *before = node;
    if (temp->enemy_number == enemy_number){
        before = temp->next;
        remove_enemy_midlist_setting(temp);
        return before;
    }
    while (temp){
        if (temp->enemy_number == enemy_number){
            before->next = temp->next;
            remove_enemy_midlist_setting(temp);
            return node;
        }
        before = temp;
        temp = temp->next;
    }
    return node;
}
