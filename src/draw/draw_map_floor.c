/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** draw_map
*/

#include "my_rpg.h"

void draw_floor(all_ruru *all, int y, int x)
{
    sfRenderTexture_drawSprite(all->window->render_texture,
    all->map->map_sprite[y][x], NULL);
}

void draw_floor_cs(all_ruru *all, int y, int x)
{
    if (all->map->map[y][x] <= 'z' && all->map->map[y][x] >= 'a')
        draw_floor(all, y, x);
}

void draw_map_floor(all_ruru *all)
{
    for (int j = 0; all->map->map_sprite[j]; j++) {
        for (int i = 0; all->map->map_sprite[j][i]; i++) {
            draw_floor_cs(all, j, i);
        }
    }
}
