/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** draw_mana_hp
*/

#include "my_rpg.h"

void draw_mana_hp(all_ruru *all)
{
    rr_window_rectsh(STATS.hp.hp_bar_bg, all->window->window);
    rr_window_rectsh(STATS.mp.mp_bar_bg, all->window->window);
    rr_window_rectsh(STATS.hp.hp_bar, all->window->window);
    rr_window_rectsh(STATS.mp.mp_bar, all->window->window);
}
