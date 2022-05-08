/*
** EPITECH PROJECT, 2022
** pause_draw.c
** File description:
** draw pause menu
*/

#include "my_rpg.h"

static void draw_gestion_game(all_ruru *all)
{
    sfRenderWindow_clear(all->window->window, sfBlack);
    draw_gestion_rendertexture(all);
    draw_map_wall(all);
    draw_player(all);
    draw_spell(all);
    rr_window_text(all->fps->text, all->window->window);
}

void draw_pause(all_t *all)
{
    draw_gestion_game(all);
    rr_window_sprite(all->pause->quit, all->window->window);
    rr_window_sprite(all->pause->menu, all->window->window);
    rr_window_sprite(all->pause->resume, all->window->window);
    sfRenderWindow_display(all->window->window);
}
