/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** create_enemy
*/

#include "my_rpg.h"

void remove_enemy(all_ruru *all, int create)
{
    all->enemy->enemy_t = node_remove(all->enemy->enemy_t, create);
}
