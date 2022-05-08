/*
** EPITECH PROJECT, 2022
** new_lib.csfml
** File description:
** ressource_all
*/

#include "my_rpg.h"
#include "csfml_window.h"

void destroy_window(all_ruru *all)
{
    sfRenderWindow_close(all->window->window);
    sfRenderWindow_destroy(all->window->window);
    free(all->window);
}
