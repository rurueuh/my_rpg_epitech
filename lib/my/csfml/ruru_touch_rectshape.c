/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** ruru_touch_sprite
*/

#include "my_rpg.h"

sfBool rr_touch_rectshape(sfRectangleShape *rect, sfRenderWindow *window)
{
    sfFloatRect rectshape_rect = sfRectangleShape_getGlobalBounds(rect);
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    if (mouse.x >= rectshape_rect.left
    && mouse.x < rectshape_rect.left + rectshape_rect.width
    && mouse.y >= rectshape_rect.top
    && mouse.y < rectshape_rect.top + rectshape_rect.height ){
        return sfTrue;
    } else {
        return sfFalse;
    }
}
