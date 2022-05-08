/*
** EPITECH PROJECT, 2022
** new_lib.csfml
** File description:
** ruru_renderwindow
*/

#include "my_rpg.h"

sfSprite *rr_sprite_scale(sfTexture *texture,
sfVector2f pos, sfVector2f scale)
{
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setScale(sprite, scale);
    sfSprite_setPosition(sprite, pos);
    return sprite;
}
