/*
** EPITECH PROJECT, 2021
** create window
** File description:
** start of game
*/

#include "my_rpg.h"

sfIntRect rr_intrect(int left, int top, int width, int height)
{
    sfIntRect test;
    test.top = top;
    test.left = left;
    test.width = width;
    test.height = height;
    return test;
}
