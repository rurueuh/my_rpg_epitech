/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** create_enemy
*/

#include "my_rpg.h"

void printpos_enemy_id(all_ruru *all, int ene)
{
    node_enemy *node = node_get_enemyid(all->enemy->enemy_t, ene);
    if (node == NULL){
        my_printf("NULL\n");
        return;
    }
    my_printf("x = %f y = %f\n", node->pos_base.x, node->pos_base.y);
}
