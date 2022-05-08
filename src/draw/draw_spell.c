/*
** EPITECH PROJECT, 2022
** my_defender_restructure
** File description:
** draw_spell
*/

#include "my_rpg.h"

void draw_spell(all_ruru *all)
{
    rr_window_sprite(all->spell->sprite_panel, all->window->window);
    if (all->spell->slow_t->active == sfTrue)
        rr_window_sprite(all->spell->slow_t->sprite, all->window->window);
    rr_window_sprite(all->spell->sprite_slow, all->window->window);
    if (all->spell->electric_t->active == sfTrue)
        rr_window_sprite(all->spell->electric_t->sprite, all->window->window);
    rr_window_sprite(all->spell->sprite_electrical, all->window->window);
    if (all->spell->explo_t->active == sfTrue)
        rr_window_sprite(all->spell->explo_t->sprite, all->window->window);
    if (all->spell->arrow_t->active == sfTrue)
        rr_window_sprite(all->spell->arrow_t->sprite, all->window->window);
    rr_window_sprite(all->spell->sprite_explo, all->window->window);
}
