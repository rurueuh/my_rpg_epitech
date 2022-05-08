/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** active_arrow
*/

#include "my_rpg.h"

static sfBool mob_in_range(all_ruru *all, arrow_t *arrow)
{
    node_enemy *tmp = all->enemy->enemy_t;
    sfFloatRect circle_rect = sfCircleShape_getGlobalBounds(
        all->spell->arrow_t->circle_radius);
    sfFloatRect mob_rect;

    while (tmp) {
        mob_rect = sfSprite_getGlobalBounds(tmp->sprite);
        if (rr_collide(circle_rect, mob_rect)) {
            arrow->enemy_id_focus = tmp->enemy_number;
            return sfTrue;
        }
        tmp = tmp->next;
    }
    return sfFalse;
}

static void effect_arrow(all_ruru *all, arrow_t *arrow)
{
    if (!mob_in_range(all, arrow)) {
        all->player->class.stats.mp.mp += arrow->mana;
        return;
    }
    sfSprite_setPosition(all->spell->arrow_t->sprite
    , sfSprite_getPosition(all->player->sprite));
    arrow->active = sfTrue;
    arrow->couldown = sfClock_create();
    add_ptr_to_all_malloc(arrow->couldown, CLOCK, MALLOC);
}

void rotation_arrow(sfSprite *arrow, sfVector2f deplacement)
{
    if (deplacement.x < 0) {
        if (deplacement.y < 0) {
            sfSprite_setRotation(arrow, 315.0f);
        } else if (deplacement.y > 0) {
            sfSprite_setRotation(arrow, 225.0f);
        } else {
            sfSprite_setRotation(arrow, 270.0f);
        }
    } else {
        if (deplacement.y < 0) {
            sfSprite_setRotation(arrow, 45.0f);
        } else if (deplacement.y > 0) {
            sfSprite_setRotation(arrow, 135.0f);
        } else {
            sfSprite_setRotation(arrow, 90.0f);
        }
    }
}

void active_attack_arrow(all_ruru *all)
{
    if (!all->spell->arrow_t->couldown) {
        if (all->player->class.stats.mp.mp >= all->spell->arrow_t->mana) {
            all->player->class.stats.mp.mp -= all->spell->arrow_t->mana;
        } else {
            return;
        }
        effect_arrow(all, all->spell->arrow_t);
    }
}
