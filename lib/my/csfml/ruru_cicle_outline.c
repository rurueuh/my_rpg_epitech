/*
** EPITECH PROJECT, 2022
** new_lib.csfml
** File description:
** ruru_renderwindow
*/

#include "my_rpg.h"

sfCircleShape *rr_circle_outl(sfVector2f pos, float radius, sfColor outline,
float radius_outline)
{
    sfCircleShape *circle = sfCircleShape_create();
    sfCircleShape_setRadius(circle, radius);
    sfCircleShape_setOutlineThickness(circle, radius_outline);
    sfCircleShape_setOutlineColor(circle, outline);
    sfCircleShape_setFillColor(circle, sfTransparent);
    pos.x -= radius;
    pos.y -= radius;
    sfCircleShape_setPosition(circle, pos);
    return circle;
}
