/*
** EPITECH PROJECT, 2022
** new_lib.csfml
** File description:
** ruru_renderwindow
*/

#include "my_rpg.h"

void rr_window_circle(sfCircleShape *circle, sfRenderWindow *window)
{
    sfRenderWindow_drawCircleShape(window, circle, NULL);
    return;
}
