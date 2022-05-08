/*
** EPITECH PROJECT, 2022
** new_lib.csfml
** File description:
** ruru_renderwindow
*/

#include "my_rpg.h"

sfRectangleShape *rr_rectsh(sfVector2f pos, sfVector2f size)
{
    sfRectangleShape *rect = sfRectangleShape_create();
    sfRectangleShape_setOutlineThickness(rect, 1);
    sfRectangleShape_setOutlineColor(rect, sfTransparent);
    sfRectangleShape_setFillColor(rect, sfTransparent);
    sfRectangleShape_setSize(rect, size);
    sfRectangleShape_setPosition(rect, pos);
    return rect;
}
