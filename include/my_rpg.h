/*
** EPITECH PROJECT, 2021
** lib for the game
** File description:
** all func of game
*/

#ifndef MYGAME_H_
    #define MYGAME_H_
    #include <SFML/Graphics.h>
    #include <SFML/Window.h>
    #include <SFML/Audio.h>
    #include <SFML/Network.h>
    #include <fcntl.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <math.h>
    #include <unistd.h>
    #include "./mylib.h"
    #include "./mylibcsfml.h"
    #include "./my_malloc.h"
    #include "../include_struct/csfml_all.h"
    #define MY_PI   3.14159265358979323846264338327950288419716939937510582
    #define RENDER_WINDOW all->window->render_texture
    #define RAD(x) ((x) * MY_PI / 180)
    #define DEG(x) ((x) * 180 / MY_PI)

    typedef sfVector2f v2f;

    int game(startscreen_t *start);
    int check_file(void);
    v2f get_mouse_position(all_ruru *all);

    float get_degrees(float i_degrees);
    float deg_to_rad(float deg);

    sfBool event_gestion(all_ruru *all);
    void event_player_rotate(all_ruru *all);
    void event_move_player(all_ruru *all);
    void event_enemy(all_ruru *all);
    sfBool event_player_invincible(all_ruru *all);
    sfBool collision_main(all_ruru *all, float x, float y, sfSprite *sprite);
    sfBool collision_cross(all_ruru *all, float x, float y, sfFloatRect rect);
    sfBool collision_diags(all_ruru *all, float x, float y, sfFloatRect rect);

    void thread_gestion(all_ruru *all);
    void ray_cast(all_ruru *all);
    void rotate_ray_player(all_ruru *all);
    void ray_cast_hit_wall(all_ruru *all, int i, float angle, raycasting_t *r);
    void ray_casting_wall_col(all_ruru *all, raycasting_t *r);

    void gestion_fps(all_ruru *all);
    void view_gestion(all_ruru *all);
    void main_enemy(all_ruru *all);
    void level_up(all_ruru *all, class_t *class);

    void draw_gestion(all_ruru *all);
    void draw_gestion_rendertexture(all_ruru *all);
    void draw_player(all_ruru *all);
    void draw_pnj(all_ruru *all);
    void draw_bubble(all_ruru *all);
    void draw_ray(all_ruru *all, sfRenderStates states);
    void draw_enemy(all_ruru *all, sfRenderStates states);
    void draw_map_floor(all_ruru *all);
    void draw_map_wall(all_ruru *all);
    void event_pnj(all_ruru *all);
    sfBool draw_blabla(all_ruru *all);
    void main_pnj(all_ruru *all);
    sfBool choose_class(all_ruru *all);

#endif
