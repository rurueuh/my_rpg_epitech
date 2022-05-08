/*
** EPITECH PROJECT, 2022
** collision_cross.c
** File description:
** collision_cross
*/

#include "my_rpg.h"

sfBool move_bot(all_ruru *all, int map_x, int map_y, sfFloatRect rect)
{
    int coin_top_y = (int) rect.top / MAP_CELL;
    int coin_left_x = (int) rect.left / MAP_CELL;
    int coin_right_x = (int) (rect.left + rect.width) / MAP_CELL;
    int coin_bot_y = (int) (rect.top + rect.height) / MAP_CELL;

    if (coin_bot_y > all->map->max_h || coin_top_y < 0 || coin_left_x < 0)
        return sfFalse;
    if (all->map->map[coin_bot_y + 1][coin_left_x] != '.'
    && all->map->map[coin_bot_y + 1][coin_right_x] != '.')
        return sfTrue;
    return sfFalse;
}

sfBool move_right(all_ruru *all, int map_x, int map_y, sfFloatRect rect)
{
    int coin_top_y = (int) rect.top / MAP_CELL;
    int coin_left_x = (int) rect.left / MAP_CELL;
    int coin_right_x = (int) (rect.left + rect.width) / MAP_CELL;
    int coin_bot_y = (int) (rect.top + rect.height) / MAP_CELL;

    if (coin_right_x > all->map->max_w)
        return sfFalse;
    if (all->map->map[coin_top_y][coin_right_x + 1] != '.'
    && all->map->map[coin_bot_y][coin_right_x + 1] != '.')
        return sfTrue;
    return sfFalse;
}

sfBool move_left(all_ruru *all, int map_x, int map_y, sfFloatRect rect)
{
    int coin_top_y = (int) rect.top / MAP_CELL;
    int coin_left_x = (int) rect.left / MAP_CELL;
    int coin_right_x = (int) (rect.left + rect.width) / MAP_CELL;
    int coin_bot_y = (int) (rect.top + rect.height) / MAP_CELL;

    if (map_x - 1 < 0)
        return sfFalse;
    if (all->map->map[coin_top_y][coin_left_x - 1] != '.'
    && all->map->map[coin_bot_y][coin_left_x - 1] != '.')
        return sfTrue;
    return sfFalse;
}

sfBool move_top(all_ruru *all, int map_x, int map_y, sfFloatRect rect)
{
    int coin_top_y = (int) rect.top / MAP_CELL;
    int coin_left_x = (int) rect.left / MAP_CELL;
    int coin_right_x = (int) (rect.left + rect.width) / MAP_CELL;
    int coin_bot_y = (int) (rect.top + rect.height) / MAP_CELL;

    if (map_y - 1 < 0)
        return sfFalse;
    if (all->map->map[coin_top_y - 1][coin_left_x] != '.'
    && all->map->map[coin_top_y - 1][coin_right_x] != '.')
        return sfTrue;
    return sfFalse;
}

sfBool collision_cross(all_ruru *all, float x, float y, sfFloatRect rect)
{
    int map_x = (int) (rect.left + rect.width / 2) / MAP_CELL;
    int map_y = (int) (rect.top + rect.height / 2) / MAP_CELL;

    if ((int) x == 0 && (int) y < 0)
        return move_top(all, map_x, map_y, rect);
    if ((int) x == 0 && (int) y > 0)
        return move_bot(all, map_x, map_y, rect);
    if ((int) x < 0 && (int) y == 0)
        return move_left(all, map_x, map_y, rect);
    if ((int) x > 0 && (int) y == 0)
        return move_right(all, map_x, map_y, rect);
    return sfFalse;
}
