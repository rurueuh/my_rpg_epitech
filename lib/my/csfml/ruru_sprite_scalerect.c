/*
** EPITECH PROJECT, 2022
** new_lib.csfml
** File description:
** ruru_renderwindow
*/

#include "my_rpg.h"

sfSprite *rr_sprite_scalerect(sfTexture *texture,
sfVector2f pos, sfVector2f scale, sfIntRect rect)
{
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, rect);
    sfSprite_setScale(sprite, scale);
    sfSprite_setPosition(sprite, pos);
    return sprite;
}
