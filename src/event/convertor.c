/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** convertor
*/

#include "my_rpg.h"

float deg_to_rad(float deg)
{
    return deg * MY_PI / 180;
}

float get_degrees(float i_degrees)
{
    return fmod(360 + fmod(i_degrees, 360), 360);
}
