/*
** EPITECH PROJECT, 2022
** collision_diags.c
** File description:
** collisions_diags
*/

#include "my_rpg.h"

sfBool move_bot_left(all_ruru *all, int map_x, int map_y, sfFloatRect rect)
{
    int coin_top_y = (int) rect.top / MAP_CELL;
    int coin_left_x = (int) rect.left / MAP_CELL;
    int coin_right_x = (int) (rect.left + rect.width) / MAP_CELL;
    int coin_bot_y = (int) (rect.top + rect.height) / MAP_CELL;

    if (map_x - 1 > 0 && map_y + 1 < all->map->max_h)
        if (all->map->map[coin_top_y + 1][coin_left_x - 1] != '.'
        && all->map->map[coin_bot_y + 1][coin_left_x - 1] != '.'
        && all->map->map[coin_bot_y + 1][coin_right_x - 1] != '.')
            return sfTrue;
    return sfFalse;
}

sfBool move_bot_right(all_ruru *all, int map_x, int map_y, sfFloatRect rect)
{
    int coin_top_y = (int) rect.top / MAP_CELL;
    int coin_left_x = (int) rect.left / MAP_CELL;
    int coin_right_x = (int) (rect.left + rect.width) / MAP_CELL;
    int coin_bot_y = (int) (rect.top + rect.height) / MAP_CELL;

    if (map_x + 1 < all->map->max_w && map_y + 1 < all->map->max_h)
        if (all->map->map[coin_top_y + 1][coin_right_x + 1] != '.'
        && all->map->map[coin_bot_y + 1][coin_right_x + 1] != '.'
        && all->map->map[coin_bot_y + 1][coin_left_x + 1] != '.')
            return sfTrue;
    return sfFalse;
}

sfBool move_top_left(all_ruru *all, int map_x, int map_y, sfFloatRect rect)
{
    int coin_top_y = (int) rect.top / MAP_CELL;
    int coin_left_x = (int) rect.left / MAP_CELL;
    int coin_right_x = (int) (rect.left + rect.width) / MAP_CELL;
    int coin_bot_y = (int) (rect.top + rect.height) / MAP_CELL;

    if (map_x - 1 > 0 && map_y - 1 > 0)
        if (all->map->map[coin_bot_y - 1][coin_left_x - 1] != '.'
        && all->map->map[coin_top_y - 1][coin_left_x - 1] != '.'
        && all->map->map[coin_top_y - 1][coin_right_x - 1] != '.')
            return sfTrue;
    return sfFalse;
}

sfBool move_top_right(all_ruru *all, int map_x, int map_y, sfFloatRect rect)
{
    int coin_top_y = (int) rect.top / MAP_CELL;
    int coin_left_x = (int) rect.left / MAP_CELL;
    int coin_right_x = (int) (rect.left + rect.width) / MAP_CELL;
    int coin_bot_y = (int) (rect.top + rect.height) / MAP_CELL;

    if (map_x + 1 < all->map->max_w && map_y - 1 > 0)
        if (all->map->map[coin_bot_y - 1][coin_right_x + 1] != '.'
        && all->map->map[coin_top_y - 1][coin_right_x + 1] != '.'
        && all->map->map[coin_top_y - 1][coin_left_x + 1] != '.')
            return sfTrue;
    return sfFalse;
}

sfBool collision_diags(all_ruru *all, float x, float y, sfFloatRect rect)
{
    int map_x = (int) (rect.left + rect.width / 2) / MAP_CELL;
    int map_y = (int) (rect.top + rect.height / 2) / MAP_CELL;

    if ((int) x < 0 && (int) y < 0)
        return move_top_left(all, map_x, map_y, rect);
    if ((int) x > 0 && (int) y < 0)
        return move_top_right(all, map_x, map_y, rect);
    if ((int) x > 0 && (int) y > 0)
        return move_bot_right(all, map_x, map_y, rect);
    if ((int) x < 0 && (int) y > 0)
        return move_bot_left(all, map_x, map_y, rect);
    return sfFalse;
}
