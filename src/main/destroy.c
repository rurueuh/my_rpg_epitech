/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** destroy
*/

#include "my_rpg.h"

static void thread_off(all_ruru *all)
{
    sfThread_terminate(all->ray->thread[0]);
    sfThread_terminate(all->ray->thread[1]);
    sfThread_destroy(all->ray->thread[0]);
    sfThread_destroy(all->ray->thread[1]);
}

void destroy_all(all_ruru *all)
{
    thread_off(all);
    for (int i = 0; i < RAYCAST_NUMBER; i++)
        sfVertexArray_destroy(all->ray->array[i]);
    sfRenderWindow_destroy(all->window->window);
    free_all_malloc(MALLOC);
}
