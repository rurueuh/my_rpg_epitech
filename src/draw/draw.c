/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** draw
*/

#include "my_rpg.h"

void draw_gestion_rendertexture(all_ruru *all)
{
    const sfTexture *tmp = sfRenderTexture_getTexture(
        all->window->render_texture);
    sfColor color = sfColor_fromRGBA(255, 255, 255, 50);

    sfSprite_setColor(all->window->sprite_texture, color);
    sfRenderTexture_clear(all->window->render_texture
    , sfColor_fromRGBA(0, 0, 0, 255));
    sfRenderStates states = {sfBlendAlpha, sfTransform_Identity, tmp, 0};
    draw_map_floor(all);
    draw_enemy(all, states);
    draw_pnj(all);
    draw_ray(all, states);
    sfRenderTexture_display(all->window->render_texture);
    sfSprite_setTexture(all->window->sprite_texture, tmp, sfFalse);
    rr_window_sprite(all->window->sprite_texture, all->window->window);
}

void draw_gestion(all_ruru *all)
{
    sfRenderWindow_clear(all->window->window, sfBlack);
    draw_gestion_rendertexture(all);
    draw_map_wall(all);
    draw_player(all);
    draw_spell(all);
    draw_mana_hp(all);
    rr_window_text(all->fps->text, all->window->window);
    sfRenderWindow_display(all->window->window);
}
