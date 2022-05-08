/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** vertex_ray_player
*/

#include "my_rpg.h"

void move_ray_player(ray_ruru *ray, int i, sfSprite *player)
{
    v2f pos_player = sfSprite_getPosition(player);
    sfFloatRect rect_player = sfSprite_getGlobalBounds(player);
    float offset_x = ray->vertex2[i].position.x - ray->vertex1.position.x;
    float offset_y = ray->vertex2[i].position.y - ray->vertex1.position.y;

    pos_player.x += rect_player.width / 2;
    pos_player.y += rect_player.height / 2;
    ray->vertex1.position.x = pos_player.x;
    ray->vertex1.position.y = pos_player.y;
    ray->vertex1.texCoords = pos_player;
    ray->vertex2[i].position.x = pos_player.x + offset_x;
    ray->vertex2[i].position.y = pos_player.y + offset_y;
}

void rotate_ray_player(all_ruru *all)
{
    int size = RAYCAST_SIZE;
    v2f vertex1 = all->ray->vertex1.position;
    float angle = -all->player->direction + RAYCAST_DEG / 2;

    for (int i = 0; i < RAYCAST_NUMBER; i++) {
        all->ray->vertex2[i].position.x = vertex1.x + size * cos(RAD(angle));
        all->ray->vertex2[i].position.y = vertex1.y + size * sin(RAD(angle));
        ray_cast_hit_wall(all, i, angle, &all->ray->raycast);
        angle -= (float) (RAYCAST_DEG / 2) / RAYCAST_NUMBER * 2;
    }
}

void ray_cast(all_ruru *all)
{
    int i = 0;
    for (; i < RAYCAST_NUMBER / 3; i++) {
        move_ray_player(all->ray, i, all->player->sprite);
        sfVertexArray_clear(all->ray->array[i]);
        sfVertexArray_append(all->ray->array[i], all->ray->vertex1);
        sfVertexArray_append(all->ray->array[i], all->ray->vertex2[i]);
        if (RAYCAST_NUMBER != i + 1){
            sfVertexArray_append(all->ray->array[i], all->ray->vertex2[i + 1]);
            sfColor color = sfColor_fromRGBA(255, 255, 255, 0);
        } else
            sfVertexArray_append(all->ray->array[i], all->ray->vertex2[i]);
    }
}

void ray_cast2(all_ruru *all)
{
    int i = RAYCAST_NUMBER / 3;
    for (; i < RAYCAST_NUMBER / 3 * 2; i++) {
        move_ray_player(all->ray, i, all->player->sprite);
        sfVertexArray_clear(all->ray->array[i]);
        sfVertexArray_append(all->ray->array[i], all->ray->vertex1);
        sfVertexArray_append(all->ray->array[i], all->ray->vertex2[i]);
        if (RAYCAST_NUMBER != i + 1) {
            sfVertexArray_append(all->ray->array[i], all->ray->vertex2[i + 1]);
            sfColor color = sfColor_fromRGBA(255, 255, 255, 0);
        } else
            sfVertexArray_append(all->ray->array[i], all->ray->vertex2[i]);
    }
}

void ray_cast3(all_ruru *all)
{
    int i = RAYCAST_NUMBER / 3 * 2;
    for (; i < RAYCAST_NUMBER / 3 * 3; i++) {
        move_ray_player(all->ray, i, all->player->sprite);
        sfVertexArray_clear(all->ray->array[i]);
        sfVertexArray_append(all->ray->array[i], all->ray->vertex1);
        sfVertexArray_append(all->ray->array[i], all->ray->vertex2[i]);
        if (RAYCAST_NUMBER != i + 1){
            sfVertexArray_append(all->ray->array[i], all->ray->vertex2[i + 1]);
            sfColor color = sfColor_fromRGBA(255, 255, 255, 0);
        } else
            sfVertexArray_append(all->ray->array[i], all->ray->vertex2[i]);
    }
}
