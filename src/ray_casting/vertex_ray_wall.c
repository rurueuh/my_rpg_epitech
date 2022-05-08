/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** vertex_ray_wall
*/

#include "my_rpg.h"

static v2f vector_norm(v2f vec)
{
    float norm = sqrt((vec.x * vec.x) + (vec.y * vec.y));

    vec.x = vec.x / norm;
    vec.y /= norm;
    return (vec);
}

void cs_if_infinite(all_ruru *all, int i, float angle, raycasting_t *r)
{
    if (r->vraydir.x < 0) {
        r->vstep.x = -1;
        r->vraylenght.x = (r->vraystart.x - (float)(r->vmapcheck.x))
        * r->vrayonestep.x;
    } else {
        r->vstep.x = 1;
        r->vraylenght.x = ((float)(r->vmapcheck.x + 1) - r->vraystart.x)
        * r->vrayonestep.x;
    }
    if (r->vraydir.y < 0) {
        r->vstep.y = -1;
        r->vraylenght.y = (r->vraystart.y - (float)(r->vmapcheck.y))
        * r->vrayonestep.y;
    } else {
        r->vstep.y = 1;
        r->vraylenght.y = ((float)(r->vmapcheck.y + 1)
        - r->vraystart.y) * r->vrayonestep.y;
    }
}

void ray_casting_color(all_ruru *all, int i, float angle, raycasting_t *r)
{
    r->vIntersection = (v2f) {r->vraystart.x + r->vraydir.x * r->fDistance
    , r->vraystart.y + r->vraydir.y * r->fDistance};
    r->c = roundf(r->fDistance) / RAYCAST_SIZE * 255 - 255 / 2 * 2 - 5;
    all->ray->vertex2[i].color = sfColor_fromRGBA(255, 255, 255, -r->c);
    all->ray->vertex2[i].position = r->vIntersection;
    all->ray->vertex2[i].texCoords = r->vIntersection;
}

static void cs_raycast_wall(all_ruru *all, int i, float angle, raycasting_t *r)
{
    while (!r->bTileFound && r->fDistance < RAYCAST_SIZE) {
        if (r->vraylenght.x < r->vraylenght.y) {
            r->vmapcheck.x += r->vstep.x;
            r->fDistance = r->vraylenght.x;
            r->vraylenght.x += r->vrayonestep.x;
        } else {
            r->vmapcheck.y += r->vstep.y;
            r->fDistance = r->vraylenght.y;
            r->vraylenght.y += r->vrayonestep.y;
        }
        if (r->vmapcheck.x / MAP_CELL >= 0 && r->vmapcheck.x
        / MAP_CELL < all->map->max_w
        && r->vmapcheck.y / MAP_CELL >= 0 && r->vmapcheck.y
        / MAP_CELL <= all->map->max_h) {
            ray_casting_wall_col(all, r);
        }
    }
}

void ray_cast_hit_wall(all_ruru *all, int i, float angle, raycasting_t *r)
{
    r->vraystart = all->ray->vertex1.position;
    r->vraydir = vector_norm((v2f) {all->ray->vertex2[i].position.x
    - r->vraystart.x, all->ray->vertex2[i].position.y - r->vraystart.y});
    r->vrayonestep = (v2f) {sqrt(1 + (r->vraydir.y * r->vraydir.y)
    / (r->vraydir.x * r->vraydir.x)),
    sqrt(1 + (r->vraydir.x * r->vraydir.x) / (r->vraydir.y * r->vraydir.y))};
    r->vmapcheck = rr_2i_2f(r->vraystart);
    cs_if_infinite(all, i, angle, r);
    r->bTileFound = sfFalse;
    r->fDistance = 0.0f;
    cs_raycast_wall(all, i, angle, r);
    ray_casting_color(all, i, angle, r);
}
