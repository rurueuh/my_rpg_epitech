/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** create_enemy
*/

#include "my_rpg.h"

void create_enemy(all_ruru *all, int create, sfVector2f pos)
{
    all->enemy->enemy_t = node_create(all->enemy->enemy_t
    , create, all, pos);
}
