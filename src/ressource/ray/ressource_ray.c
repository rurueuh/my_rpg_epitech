/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** ressource_ray
*/

#include "my_rpg.h"

void ressource_ray_one(ray_ruru *ray, v2f vertex1, v2f vertex2, int i)
{
    ray->vertex1.color = RAYCAST_COLOR;
    ray->array[i] = sfVertexArray_create();
    sfVertexArray_setPrimitiveType(ray->array[i], sfTriangles);
}

ray_ruru *ressource_ray(all_ruru *all)
{
    ray_ruru *ray = malloc(sizeof(ray_ruru));
    ray->direction_check = 0;
    v2f vertex1 = {100, 100};
    v2f vertex2 = {0, 0};
    float angle = (RAYCAST_DEG / 2);
    for (int i = 0; i < RAYCAST_NUMBER; i++) {
        ressource_ray_one(ray, vertex1, vertex2, i);
        angle -= (float) (RAYCAST_DEG / 2) / RAYCAST_NUMBER * 2;
    }
    ray->fps = all->window->fps;
    ray->threader = sfTrue;
    ray->thread[0] = sfThread_create( (void *) thread_ray_cast, all);
    ray->thread[1] = sfThread_create( (void *) thread_ray_cast2, all);
    ray->thread[2] = sfThread_create( (void *) thread_ray_cast3, all);
    return ray;
}
