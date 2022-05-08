/*
** EPITECH PROJECT, 2022
** new_lib.csfml
** File description:
** ruru_renderwindow
*/

#include "my_rpg.h"

void rr_window_sprite(sfSprite *sprite, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, sprite, NULL);
    return;
}
