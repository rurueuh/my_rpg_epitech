/*
** EPITECH PROJECT, 2022
** click on sprite
** File description:
** click click
*/

#include "my_rpg.h"

sfBool my_mouse_touch_sprite(sfRenderWindow* window, sfSprite* sprite)
{
    int verif = 0;
    sfFloatRect rect_sprite = sfSprite_getGlobalBounds(sprite);
    sfVector2f mouse = rr_2f_2i(
        sfMouse_getPositionRenderWindow(window));
    if (mouse.x >= rect_sprite.left
        && mouse.x < rect_sprite.left + rect_sprite.width
        && mouse.y >= rect_sprite.top
        && mouse.y < rect_sprite.top + rect_sprite.height ){
        return sfTrue;
    } else {
        return sfFalse;
    }
}
