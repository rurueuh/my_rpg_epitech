/*
** EPITECH PROJECT, 2022
** new_lib.csfml
** File description:
** ruru_renderwindow
*/

#include "my_rpg.h"

void rr_window_rectsh(sfRectangleShape *Rectangle, sfRenderWindow *window)
{
    sfRenderWindow_drawRectangleShape(window, Rectangle, NULL);
    return;
}
