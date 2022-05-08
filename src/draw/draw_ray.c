/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** draw_ray
*/

#include "my_rpg.h"

void draw_ray(all_ruru *all, sfRenderStates states)
{
    for (int i = 0; i < RAYCAST_NUMBER; i++) {
        sfRenderWindow_drawVertexArray(all->window->window
        , all->ray->array[i], &states);
    }
}
