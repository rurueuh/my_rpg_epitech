/*
** EPITECH PROJECT, 2022
** new_lib.csfml
** File description:
** ruru_renderwindow
*/

#include "my_rpg.h"

sfSprite *rr_sprite_opa(sfTexture *texture, sfVector2f pos, short opacity)
{
    sfSprite *sprite = sfSprite_create();
    sfColor color = sfColor_fromRGBA(255, 255, 255, opacity);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setColor(sprite, color);
    sfSprite_setPosition(sprite, pos);
    return sprite;
}
