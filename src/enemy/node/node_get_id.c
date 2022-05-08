/*
** EPITECH PROJECT, 2022
** test
** File description:
** node_remove_mid
*/

#include "my_rpg.h"

node_enemy *node_get_enemyid(node_enemy *node, int enemy_id)
{
    if (enemy_id <= 0)
        return node;
    if (node_empty(node) == 1)
        return NULL;
    if (node->next == NULL && enemy_id == 1)
        return node;
    if (node->next == NULL)
        return NULL;
    node_enemy *temp = node;
    if (temp->enemy_number == enemy_id)
        return temp;
    for (int i = 0; i < enemy_id && temp; i += 1){
        temp = temp->next;
        if (temp->enemy_number == enemy_id)
            return temp;
    }
    return NULL;
}
