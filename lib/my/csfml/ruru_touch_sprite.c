/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** ruru_touch_sprite
*/

#include "my_rpg.h"

sfBool rr_touch_sprite(sfSprite *sprite, sfRenderWindow *window)
{
    sfFloatRect sprite_rect = sfSprite_getGlobalBounds(sprite);
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    if (mouse.x >= sprite_rect.left
    && mouse.x < sprite_rect.left + sprite_rect.width
    && mouse.y >= sprite_rect.top
    && mouse.y < sprite_rect.top + sprite_rect.height ){
        return sfTrue;
    } else {
        return sfFalse;
    }
}
