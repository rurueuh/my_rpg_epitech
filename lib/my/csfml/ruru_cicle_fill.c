/*
** EPITECH PROJECT, 2022
** new_lib.csfml
** File description:
** ruru_renderwindow
*/

#include "my_rpg.h"

sfCircleShape *rr_circle_fill(sfVector2f pos, float radius, sfColor fill)
{
    sfCircleShape *circle = sfCircleShape_create();
    sfCircleShape_setRadius(circle, radius);
    sfCircleShape_setOutlineThickness(circle, 1);
    sfCircleShape_setOutlineColor(circle, sfTransparent);
    sfCircleShape_setFillColor(circle, fill);
    pos.x -= radius;
    pos.y -= radius;
    sfCircleShape_setPosition(circle, pos);
    return circle;
}
