/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** draw_player
*/

#include "my_rpg.h"

void draw_player(all_ruru *all)
{
    rr_window_sprite(all->player->sprite, all->window->window);
    rr_window_text(all->player->class.stats.lvl_text, all->window->window);
    rr_window_text(all->player->class.stats.level_text, all->window->window);
}
