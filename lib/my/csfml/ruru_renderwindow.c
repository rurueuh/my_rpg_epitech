/*
** EPITECH PROJECT, 2022
** new_lib.csfml
** File description:
** ruru_renderwindow
*/

#include "my_rpg.h"
#include "../../../include_struct/csfml_window.h"

void rr_window(window_ruru *window)
{
    window->videomode.width = window->x;
    window->videomode.height = window->y;
    window->videomode.bitsPerPixel = window->bitperpixel;
    int param = (window->fullscreen == sfTrue) ? 14 : 6;
    window->window = sfRenderWindow_create(window->videomode,
    window->name, param, NULL);
    sfRenderWindow_setFramerateLimit(window->window, window->fps);
    return;
}
