/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** active_elec
*/

#include "my_rpg.h"

v2f get_mouse_position(all_ruru *all)
{
    v2f pos = {0, 0};
    sfVector2i mouse = sfMouse_getPositionRenderWindow(all->window->window);
    sfFloatRect rect = sfSprite_getGlobalBounds(all->player->sprite);
    v2f pos_player = sfSprite_getPosition(all->player->sprite);
    v2f mult = {(float) all->view->x / all->window->x
    , (float) all->view->y / all->window->y};

    pos_player.x += rect.width / 2;
    pos_player.y += rect.height / 2;
    pos = rr_2f(pos_player.x - all->view->x / 2
    , pos_player.y - all->view->y / 2);
    pos.x += mouse.x * mult.x;
    pos.y += mouse.y * mult.y;
    return pos;
}

static void aply_elec_effect(all_ruru *all, sfFloatRect r)
{
    all->spell->electric_t->couldown = sfClock_create();
    all->spell->electric_t->position = rr_2i_2f(get_mouse_position(all));
    all->spell->electric_t->position.x -= r.width / 2;
    all->spell->electric_t->position.y -= r.height / 2;
    add_ptr_to_all_malloc(all->spell->electric_t->couldown, CLOCK, MALLOC);
    remove_enemy_hp_area(all, r, all->spell->electric_t->damage);
    all->spell->electric_t->active = sfTrue;
}

void active_spell_elec(all_ruru *all)
{
    sfSprite_setPosition(all->spell->electric_t->sprite
    , get_mouse_position(all));
    sfFloatRect r = sfSprite_getGlobalBounds(all->spell->electric_t->sprite);

    r.height = r.height / 2;
    if (!all->spell->electric_t->couldown) {
        if (all->player->class.stats.mp.mp >= all->spell->electric_t->mana) {
            all->player->class.stats.mp.mp -= all->spell->electric_t->mana;
            sfSound_play(all->spell->electric_t->electric_sound);
        } else {
            return;
        }
        aply_elec_effect(all, r);
    }
}
