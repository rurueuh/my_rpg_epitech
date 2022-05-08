/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** ray_casting_wall_col
*/

#include "my_rpg.h"

void ray_casting_wall_col(all_ruru *all, raycasting_t *r)
{
    if (all->map->map[r->vmapcheck.y / MAP_CELL]
    [r->vmapcheck.x / MAP_CELL] == '#'
    || all->map->map[r->vmapcheck.y / MAP_CELL][r->vmapcheck.x / MAP_CELL]
    >= 'A'
    && all->map->map[r->vmapcheck.y / MAP_CELL][r->vmapcheck.x / MAP_CELL]
    <= 'Z') {
        r->bTileFound = sfTrue;
    }
}
