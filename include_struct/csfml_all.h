/*
** EPITECH PROJECT, 2022
** network
** File description:
** csfml_all
*/

#ifndef CSFML_ALL_H_
    #define CSFML_ALL_H_

    #include "csfml_raycast.h"
    #include "csfml_window.h"
    #include "csfml_player.h"
    #include "csfml_enemy.h"
    #include "csfml_spell.h"
    #include "csfml_view.h"
    #include "csfml_setting.h"
    #include "csfml_fps.h"
    #include "csfml_map.h"
    #include "csfml_startscreen.h"
    #include "csfml_pause.h"
    #include "csfml_pnj.h"

    typedef struct all_ruru {
        window_ruru *window;
        player_ruru *player;
        fps_ruru *fps;
        ray_ruru *ray;
        map_ruru *map;
        enemy_t *enemy;
        pnj_t *pnj;
        ruru_view *view;
        spell_t *spell;
        startscreen_t *start;
        pause_t *pause;
        malloc_t *malloc;
    } all_ruru;

    sfBool my_mouse_touch_sprite(sfRenderWindow* window, sfSprite* sprite);
    all_ruru *ressource_all(startscreen_t *start);
    map_ruru *ressource_map(all_ruru *all);
    fps_ruru *ressource_fps(all_ruru *all);
    player_ruru *ressource_player(all_ruru *all);
    void ressource_class(all_ruru *all, player_ruru *player);
    window_ruru *ressource_window(all_ruru *all);
    spell_t *ressource_spell(all_ruru *all);
    ray_ruru *ressource_ray(all_ruru *all);
    ruru_view *ressource_view(all_ruru *all);
    enemy_t *ressource_enemy(all_ruru *all);
    pnj_t *ressource_pnj(all_ruru *all);
    void destroy_all(all_ruru *all);
#endif
