/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** gestion_arrow
*/

#include "my_rpg.h"

static int gestion_arrow_x(sfVector2f pos_sprite, sfVector2f pos_arrow
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

static int gestion_arrow_y(sfVector2f pos_sprite, sfVector2f pos_arrow
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

static void destroy_and_stop_arrow(all_ruru *all, arrow_t *arrow)
{
    my_free(arrow->couldown, MALLOC);
    arrow->couldown = NULL;
    arrow->active = sfFalse;
}

static void refix_circle_arrow(all_ruru *all, arrow_t *arrow)
{
    sfVector2f pos_circle;
    pos_circle.x = sfSprite_getPosition(all->player->sprite).x;
    pos_circle.y = sfSprite_getPosition(all->player->sprite).y;
    pos_circle.x -= sfCircleShape_getGlobalBounds(
        all->spell->arrow_t->circle_radius).width / 2;
    pos_circle.y -= sfCircleShape_getGlobalBounds(
        all->spell->arrow_t->circle_radius).height / 2;
    sfCircleShape_setPosition(arrow->circle_radius, pos_circle);
}

void gestion_attack_arrow(all_ruru *all)
{
    v2f move;
    refix_circle_arrow(all, all->spell->arrow_t);
    if (all->spell->arrow_t->active == sfTrue) {
        v2f mob = get_pos_enemy_id(all, all->spell->arrow_t->enemy_id_focus);
        if (mob.x == 0 && mob.y == 0)
            destroy_and_stop_arrow(all, all->spell->arrow_t);
        move.x = gestion_arrow_x(mob, sfSprite_getPosition(
            all->spell->arrow_t->sprite), all->spell->arrow_t->speed);
        move.y = gestion_arrow_y(mob, sfSprite_getPosition(
            all->spell->arrow_t->sprite), all->spell->arrow_t->speed);
        sfSprite_move(all->spell->arrow_t->sprite, move);
        rotation_arrow(all->spell->arrow_t->sprite, move);
        gestion_attack_arrow_mob(all);
    } else if (all->spell->arrow_t->couldown != NULL) {
        if (rr_getclock(all->spell->arrow_t->couldown) >= 0.5) {
            destroy_and_stop_arrow(all, all->spell->arrow_t);
        }
    }
}
