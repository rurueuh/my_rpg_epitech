/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** gestion_sword
*/

#include "my_rpg.h"

static void refix_circle_sword(all_ruru *all, sword_t *sword)
{
    sfVector2f pos_circle;
    pos_circle.x = sfSprite_getPosition(all->player->sprite).x;
    pos_circle.x += sfSprite_getGlobalBounds(all->player->sprite).width / 2;
    pos_circle.y = sfSprite_getPosition(all->player->sprite).y;
    pos_circle.y += sfSprite_getGlobalBounds(all->player->sprite).height / 2;
    pos_circle.x -= sfCircleShape_getGlobalBounds(
        all->spell->sword_t->circle_radius).width / 2;
    pos_circle.y -= sfCircleShape_getGlobalBounds(
        all->spell->sword_t->circle_radius).height / 2;
    sfCircleShape_setPosition(sword->circle_radius, pos_circle);
}

static void destroy_and_stop_sword(all_ruru *all, sword_t *sword)
{
    my_free(sword->couldown, MALLOC);
    sword->couldown = NULL;
    sword->active = sfFalse;
}

void gestion_attack_sword(all_ruru *all)
{
    refix_circle_sword(all, all->spell->sword_t);

    if (all->spell->sword_t->couldown != NULL) {
        if (rr_getclock(all->spell->sword_t->couldown) > 0.5)
            destroy_and_stop_sword(all, all->spell->sword_t);
    }
}
