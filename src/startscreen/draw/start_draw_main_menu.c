/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** start_draw_main_menu
*/

#include "my_rpg.h"

void start_draw_menu(startscreen_t *start)
{
    if (start->main->active == sfTrue) {
        rr_window_sprite(start->main->background, start->window->window);
        rr_window_sprite(start->button->res, start->window->window);
        rr_window_sprite(start->button->qui, start->window->window);
        rr_window_sprite(start->button->set, start->window->window);
    }
}
