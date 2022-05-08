/*
** EPITECH PROJECT, 2022
** new_lib.csfml
** File description:
** ruru_renderwindow
*/

#include "my_rpg.h"

sfSprite *rr_sprite_oparect(sfTexture *texture, sfVector2f pos, short opacity,
sfIntRect rect)
{
    sfSprite *sprite = sfSprite_create();
    sfColor color = sfColor_fromRGBA(255, 255, 255, opacity);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, rect);
    sfSprite_setColor(sprite, color);
    sfSprite_setPosition(sprite, pos);
    return sprite;
}
