/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** csfml_raycast
*/

#ifndef CSFML_RAYCAST_H_
    #define CSFML_RAYCAST_H_

    #define RAYCAST_NUMBER  250
    #define RAYCAST_DEG     90.0f
    #define RAYCAST_SIZE    500
    #define RAYCAST_COLOR   sfWhite

    #define MAP_RAYX [r->vmapcheck.y / MAP_CELL]
    #define MAP_RAYY [r->vmapcheck.x / MAP_CELL]

    typedef struct all_ruru all_ruru;

    void ray_cast1(all_ruru *all);
    void ray_cast2(all_ruru *all);
    void ray_cast3(all_ruru *all);
    void thread_ray_cast(all_ruru *all);
    void thread_ray_cast2(all_ruru *all);
    void thread_ray_cast3(all_ruru *all);

    typedef struct {
        sfVector2f vraystart;
        sfVector2f vraydir;
        sfVector2f vrayonestep;
        sfVector2i vmapcheck;
        sfVector2f vraylenght;
        sfVector2i vstep;
        sfBool bTileFound;
        float fDistance;
        sfVector2f vIntersection;
        int c;
    } raycasting_t;

    typedef struct {
        sfThread *thread[3];
        sfMutex *mutex;
        sfBool threader;
        sfClock *framerate;
        unsigned int fps;
        unsigned short direction_check;
        float deg_ray[RAYCAST_NUMBER];
        sfVertex vertex1;
        sfVertex vertex2[RAYCAST_NUMBER];
        sfVertexArray *array[RAYCAST_NUMBER];
        raycasting_t raycast;
    } ray_ruru;

#endif
