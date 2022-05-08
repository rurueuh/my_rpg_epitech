/*
** EPITECH PROJECT, 2022
** new_lib.csfml
** File description:
** ruru_renderwindow
*/

#include "my_rpg.h"

void rr_window_text(sfText *text, sfRenderWindow *window)
{
    sfRenderWindow_drawText(window, text, NULL);
    return;
}
