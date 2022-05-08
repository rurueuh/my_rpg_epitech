/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** csfml_map
*/

#ifndef CSFML_MAP_H_
    #define CSFML_MAP_H_

    #define MAP_CELL 32
    #define ENUM 21

static const char *sprite_name[] = {
    "michel/image/wall_hashtag.png",
    "michel/image/wall_a.png",
    "michel/image/wall_b.png",
    "michel/image/wall_c.png",
    "michel/image/wall_d.png",
    "michel/image/wall_e.png",
    "michel/image/wall_f.png",
    "michel/image/wall_g.png",
    "michel/image/wall_h.png",
    "michel/image/wall_i.png",
    "michel/image/wall_j.png",
    "michel/image/wall_k.png",
    "michel/image/floor_a.png",
    "michel/image/floor_b.png",
    "michel/image/floor_c.png",
    "michel/image/floor_d.png",
    "michel/image/floor_e.png",
    "michel/image/floor_f.png",
    "michel/image/floor_g.png",
    "michel/image/floor_h.png",
    "michel/image/floor_i.png",
};

    typedef struct {
        char *map[150];
        sfTexture *texture_bloc[ENUM];
        sfTexture *texture_void;
        sfSprite **map_sprite[150];
        sfTexture *texture_map;
        sfSprite *map_tmp;
        unsigned short max_h;
        unsigned short max_w;
    } map_ruru;
#endif
