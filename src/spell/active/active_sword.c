/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** active_sword
*/

#include "my_rpg.h"

static void mob_in_range(all_ruru *all, sword_t *sword)
{
    node_enemy *tmp = all->enemy->enemy_t;
    node_enemy *tmp_tmp = all->enemy->enemy_t;
    sfFloatRect circle_rect = sfCircleShape_getGlobalBounds(
        all->spell->sword_t->circle_radius);
    sfFloatRect mob_rect;

    while (tmp) {
        mob_rect = sfSprite_getGlobalBounds(tmp->sprite);
        if (rr_collide(circle_rect, mob_rect)) {
            tmp->hp -= all->player->class.stats.attack;
        }
        if (tmp->hp <= 0) {
            tmp_tmp = tmp->next;
            remove_enemy_id(all, tmp->enemy_number);
            tmp = tmp_tmp;
        } else {
            tmp = tmp->next;
        }
    }
}

static void effect_sword(all_ruru *all, sword_t *sword)
{
    mob_in_range(all, sword);
    sword->active = sfTrue;
    sword->couldown = sfClock_create();
    add_ptr_to_all_malloc(sword->couldown, CLOCK, MALLOC);
}

void active_attack_sword(all_ruru *all)
{
    if (!all->spell->sword_t->couldown) {
        if (all->player->class.stats.mp.mp >= all->spell->sword_t->mana) {
            all->player->class.stats.mp.mp -= all->spell->sword_t->mana;
        } else {
            return;
        }
        effect_sword(all, all->spell->sword_t);
    }
}
