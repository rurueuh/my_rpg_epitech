/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** start_ressource_window
*/

#include "my_rpg.h"

start_window *startscreen_ressource_window(startscreen_t *start)
{
    start_window *window = malloc(sizeof(start_window));
    window->bitperpixel = 32;
    window->fps = 144;
    window->vsync = sfFalse;
    window->name = "ruru_rpg";
    window->x = 1920;
    window->y = 1080;
    rr_window((window_ruru *) window);
    window->thread = sfTrue;
    window->vsync = sfFalse;
    sfRenderWindow_setKeyRepeatEnabled(window->window, sfTrue);
    return window;
}
