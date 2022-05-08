/*
** EPITECH PROJECT, 2022
** collision_main.c
** File description:
** collision_main
*/

#include "my_rpg.h"

sfBool collision_main(all_ruru *all, float x, float y, sfSprite *sprite)
{
    sfFloatRect sprite_rect = sfSprite_getGlobalBounds(sprite);
    if (collision_cross(all, x, y, sprite_rect))
        return sfTrue;
    if (collision_diags(all, x, y, sprite_rect))
        return sfTrue;
    return sfFalse;
}
