/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** start_draw_all
*/

#include "my_rpg.h"

void start_draw_all(startscreen_t *start)
{
    sfRenderWindow_clear(start->window->window, sfBlack);
    if (start->anim->active == sfTrue)
        rr_window_sprite(start->anim->sprite, start->window->window);
    start_draw_menu(start);
    sfRenderWindow_display(start->window->window);
}
