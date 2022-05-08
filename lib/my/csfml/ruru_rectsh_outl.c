/*
** EPITECH PROJECT, 2022
** new_lib.csfml
** File description:
** ruru_renderwindow
*/

#include "my_rpg.h"

sfRectangleShape *rr_rectsh_outl(sfVector2f pos, sfVector2f size,
sfColor outlin, float radius)
{
    sfRectangleShape *rect = sfRectangleShape_create();
    sfRectangleShape_setOutlineThickness(rect, radius);
    sfRectangleShape_setOutlineColor(rect, outlin);
    sfRectangleShape_setFillColor(rect, sfTransparent);
    sfRectangleShape_setSize(rect, size);
    sfRectangleShape_setPosition(rect, pos);
    return rect;
}
