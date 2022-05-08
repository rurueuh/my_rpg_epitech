/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** remove_enemy_hp_area
*/

#include "my_rpg.h"

static node_enemy *remove_one_enemy_hp_area(all_ruru *all, sfFloatRect area
, int hp_remove, node_enemy *tmp)
{
    node_enemy *tmp_tmp = tmp;
    sfFloatRect tmp_rect = sfSprite_getGlobalBounds(tmp->sprite);

    if (rr_collide(tmp_rect, area)){
        tmp->hp -= hp_remove;
        if (tmp->hp <= 0) {
            tmp_tmp = tmp->next;
            remove_enemy_id(all, tmp->enemy_number);
            tmp = tmp_tmp;
            return tmp;
        }
    }
    return tmp->next;
}

void remove_enemy_hp_area(all_ruru *all, sfFloatRect area, int hp_remove)
{
    node_enemy *tmp = all->enemy->enemy_t;

    while (tmp) {
        tmp = remove_one_enemy_hp_area(all, area, hp_remove, tmp);
    }
}
