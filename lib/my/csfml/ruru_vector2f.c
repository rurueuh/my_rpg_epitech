/*
** EPITECH PROJECT, 2022
** new_lib.csfml
** File description:
** ruru_vector2f
*/

#include "my_rpg.h"

sfVector2f rr_2f(float x, float y)
{
    sfVector2f vector = {x , y};
    return vector;
}

sfVector2f rr_2f_2u(sfVector2u vector2u)
{
    sfVector2f vector = {vector2u.x, vector2u.y};
    return vector;
}

sfVector2f rr_2f_2i(sfVector2i vector2i)
{
    sfVector2f vector = {vector2i.x, vector2i.y};
    return vector;
}
