/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** map
*/

#include "my_rpg.h"

int solid_block_check(all_ruru *all, map_ruru *map, int i, int j)
{
    char chars[] = "#ABCDEFGHIJKabcdefghi";
    for (int k = 0; chars[k]; k++) {
        if (map->map[i][j] == chars[k]) {
            map->map_sprite[i][j] = rr_sprite(map->texture_bloc[k]
            , rr_2f(j * MAP_CELL, i * MAP_CELL));
            return 1;
        }
    }
    return 0;
}

static void ressource_map_bloc_sprite(all_ruru *all, map_ruru *map, int i)
{
    int j = 0;
    int strlen_string = my_strlen(map->map[i]);
    map->map_sprite[i] = malloc(sizeof(sfSprite *) * (strlen_string + 1));

    for (; map->map[i][j]; j++) {
        if (solid_block_check(all, map, i, j) == 0) {
            map->map_sprite[i][j] = rr_sprite(map->texture_void
            , rr_2f(j * MAP_CELL, i * MAP_CELL));
        }
        add_ptr_to_all_malloc(map->map_sprite[i][j], SPRITE, MALLOC);
    }
    map->map_sprite[i][j] = NULL;
    add_ptr_to_all_malloc(map->map_sprite[i], NORMAL, MALLOC);

}

int ressource_map_file(map_ruru *map, all_ruru *all)
{
    int i = 0;
    FILE *fd = fopen("michel/info/map1", "rb");
    size_t size = 0;
    while (1) {
        map->map[i] = add_malloc(sizeof(char *), NORMAL, MALLOC);
        int status = getline(&map->map[i], &size, fd);
        add_ptr_to_all_malloc(map->map[i], NORMAL, MALLOC);
        if (status == -1) {
            map->map[i] = NULL;
            map->max_h = i - 1;
            break;
        }
        size = 0;
        i += 1;
    }
    fclose(fd);
    if (i == 0)
        return 84;
    map->max_w = my_strlen(map->map[0]) - 1;
}

map_ruru *ressource_map(all_ruru *all)
{
    map_ruru *map = malloc(sizeof(map_ruru));
    int i = 0;
    map->texture_void = rr_texture("michel/image/transparent.png", sfTrue);
    if (ressource_map_file(map, all) == 84)
        return NULL;
    for (int j = 0; j < ENUM; j++) {
        map->texture_bloc[j] = rr_texture((char *)sprite_name[j], sfTrue);
        add_ptr_to_all_malloc(map->texture_bloc[j], TEXTURE, MALLOC);
    }
    for (i = 0; map->map[i]; i++) {
        ressource_map_bloc_sprite(all, map, i);
    }
    map->map_sprite[i] = NULL;
    map->texture_map = rr_texture("michel/image/map1.png", sfTrue);
    map->map_tmp = rr_sprite_scale(map->texture_map, rr_2f(0, 0), rr_2f(3, 3));
    add_ptr_to_all_malloc(map->map_tmp, SPRITE, MALLOC);
    add_ptr_to_all_malloc(map->texture_map, TEXTURE, MALLOC);
    add_ptr_to_all_malloc(map->texture_void, TEXTURE, MALLOC);
    add_ptr_to_all_malloc(map, NORMAL, MALLOC);
    return map;
}
