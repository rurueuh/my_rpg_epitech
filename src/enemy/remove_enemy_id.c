/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** create_enemy
*/

#include "my_rpg.h"

void remove_enemy_id(all_ruru *all, int ene)
{
    all->enemy->enemy_t = remove_node_id(all->enemy->enemy_t, ene);
    all->player->class.stats.exp += 100;
}
