/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** draw_map
*/

#include "my_rpg.h"

void draw_wall(all_ruru *all, int y, int x)
{
    rr_window_sprite(all->map->map_sprite[y][x], all->window->window);
}

void draw_wall_cs(all_ruru *all, int y, int x)
{
    if (all->map->map[y][x] <= 'Z' && all->map->map[y][x] >= 'A'
    || all->map->map[y][x] == '#')
        draw_wall(all, y, x);
}

void draw_map_wall(all_ruru *all)
{
    for (int j = 0; all->map->map_sprite[j]; j++) {
        for (int i = 0; all->map->map_sprite[j][i]; i++) {
            draw_wall_cs(all, j, i);
        }
    }
}
