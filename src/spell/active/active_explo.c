/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** active_elec
*/

#include "my_rpg.h"

static void aply_explo_effect(all_ruru *all, sfFloatRect r)
{
    all->spell->explo_t->couldown = sfClock_create();
    all->spell->explo_t->position = rr_2i_2f(get_mouse_position(all));
    all->spell->explo_t->position.x -= r.width / 2;
    all->spell->explo_t->position.y -= r.height / 2;
    add_ptr_to_all_malloc(all->spell->explo_t->couldown, CLOCK, MALLOC);
    remove_enemy_hp_area(all, r, all->spell->explo_t->damage);
    all->spell->explo_t->active = sfTrue;
}

void active_spell_explo(all_ruru *all)
{
    sfSprite_setPosition(all->spell->explo_t->sprite
    , get_mouse_position(all));
    sfFloatRect r = sfSprite_getGlobalBounds(all->spell->explo_t->sprite);

    r.height = r.height / 2;
    if (!all->spell->explo_t->couldown) {
        if (all->player->class.stats.mp.mp >= all->spell->explo_t->mana) {
            sfSound_play(all->spell->explo_t->explode_sound);
            all->player->class.stats.mp.mp -= all->spell->explo_t->mana;
        } else {
            return;
        }
        aply_explo_effect(all, r);
    }
}
