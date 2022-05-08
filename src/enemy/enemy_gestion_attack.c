/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** enemy_gestion
*/

#include "my_rpg.h"

void gestion_enemy_attack(all_ruru *all)
{
    node_enemy *tmp = all->enemy->enemy_t;
    sfFloatRect rect_mob;
    sfFloatRect rect_player = sfSprite_getGlobalBounds(all->player->sprite);

    if (node_empty(all->enemy->enemy_t))
        return;
    while (tmp) {
        rect_mob = sfSprite_getGlobalBounds(tmp->sprite);
        if (rr_collide(rect_mob, rect_player)
        && all->player->clock_invincible == NULL) {
            tmp->hp -= 1;
            all->player->class.stats.hp.hp -= 10;
            all->player->clock_invincible = sfClock_create();
            add_ptr_to_all_malloc(all->player->clock_invincible
            , CLOCK, MALLOC);
        }
        tmp = tmp->next;
    }
}
