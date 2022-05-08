/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** draw_pnj
*/

#include "my_rpg.h"

static void draw(pnj_t *pnj, all_ruru *all, int state)
{
    sfRenderWindow_clear(all->window->window, sfBlack);
    draw_gestion_rendertexture(all);
    draw_map_wall(all);
    draw_player(all);
    draw_spell(all);
    draw_mana_hp(all);
    rr_window_sprite(pnj->text.bubulle_sprite, all->window->window);
    if (state >= 1)
        rr_window_sprite(pnj->text.sprite[0], all->window->window);
    if (state >= 2)
        rr_window_sprite(pnj->text.sprite[1], all->window->window);
    if (state >= 3)
        rr_window_sprite(pnj->text.sprite[2], all->window->window);
    rr_window_text(all->fps->text, all->window->window);
    sfRenderWindow_display(all->window->window);
}

void draw_pnj_interface(all_ruru *all)
{
    int state = rr_getclock(all->pnj->text.clock) / 1;
    draw(all->pnj, all, state);
}
