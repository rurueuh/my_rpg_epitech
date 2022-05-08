/*
** EPITECH PROJECT, 2022
** new_lib.csfml
** File description:
** ruru_vector2f
*/

#include "my_rpg.h"

sfVector2u rr_2u(float x, float y)
{
    sfVector2u vector = {x , y};
    return vector;
}

sfVector2u rr_2u_2f(sfVector2f vector2u)
{
    sfVector2u vector = {vector2u.x, vector2u.y};
    return vector;
}

sfVector2u rr_2u_2i(sfVector2i vector2i)
{
    sfVector2u vector = {vector2i.x, vector2i.y};
    return vector;
}
