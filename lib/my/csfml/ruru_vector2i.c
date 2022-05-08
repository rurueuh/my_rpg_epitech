/*
** EPITECH PROJECT, 2022
** new_lib.csfml
** File description:
** ruru_vector2f
*/

#include "my_rpg.h"

sfVector2i rr_2i(float x, float y)
{
    sfVector2i vector = {x , y};
    return vector;
}

sfVector2i rr_2i_2u(sfVector2u vector2u)
{
    sfVector2i vector = {vector2u.x, vector2u.y};
    return vector;
}

sfVector2i rr_2i_2f(sfVector2f vector2i)
{
    sfVector2i vector = {vector2i.x, vector2i.y};
    return vector;
}
