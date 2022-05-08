/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** ruru_detect_collision
*/

#include "my_rpg.h"

sfBool rr_collide(sfFloatRect rect1, sfFloatRect rect2)
{
    if (sfFloatRect_intersects(&rect2, &rect1, NULL))
        return sfTrue;
    return sfFalse;
}
