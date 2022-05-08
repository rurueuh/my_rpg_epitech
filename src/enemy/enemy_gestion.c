/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** enemy_gestion
*/

#include "my_rpg.h"

static int gestion_mob_x(sfVector2f pos_sprite, sfVector2f pos_arrow
, int speed)
{
    if (pos_sprite.x + speed > pos_arrow.x
    && pos_sprite.x - speed < pos_arrow.x)
        return 0;
    else {
        if (pos_sprite.x < pos_arrow.x)
            return -speed;
        else
            return speed;
    }
}

static int gestion_mob_y(sfVector2f pos_sprite, sfVector2f pos_arrow
, int speed)
{
    if (pos_sprite.y + speed > pos_arrow.y
    && pos_sprite.y - speed < pos_arrow.y)
        return 0;
    else {
        if (pos_sprite.y < pos_arrow.y)
            return -speed;
        else
            return speed;
    }
}

static void gestion_mob_move(all_ruru *all, sfSprite *mob, sfSprite *player
, node_enemy *tmp)
{
    sfVector2f move = {0, 0};
    sfVector2f pos_sprite = sfSprite_getPosition(player);
    sfVector2f pos_arrow = sfSprite_getPosition(mob);

    if (rr_getclock(tmp->clock) > 0.02) {
        sfClock_restart(tmp->clock);
        move.x = gestion_mob_x(pos_sprite, pos_arrow, tmp->speed / 3);
        move.y = gestion_mob_y(pos_sprite, pos_arrow, tmp->speed / 3);
        if (collision_main(all, move.x, move.y, tmp->sprite))
            sfSprite_move(mob, move);
    }
}

void main_enemy(all_ruru *all)
{
    node_enemy *tmp = all->enemy->enemy_t;
    if (node_empty(all->enemy->enemy_t) == 0) {
        gestion_enemy_attack(all);
        while (tmp) {
            gestion_mob_move(all, tmp->sprite, all->player->sprite, tmp);
            tmp = tmp->next;
        }
    }
}
