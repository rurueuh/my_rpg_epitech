/*
** EPITECH PROJECT, 2022
** new_lib.csfml
** File description:
** ruru_renderwindow
*/

#include "my_rpg.h"

sfRectangleShape *rr_rectsh_outlfill(sfVector2f pos, sfVector2f size,
sfColor fill, sfColor outl)
{
    sfRectangleShape *rect = sfRectangleShape_create();
    sfRectangleShape_setOutlineThickness(rect, 1);
    sfRectangleShape_setOutlineColor(rect, outl);
    sfRectangleShape_setFillColor(rect, fill);
    sfRectangleShape_setSize(rect, size);
    sfRectangleShape_setPosition(rect, pos);
    return rect;
}
