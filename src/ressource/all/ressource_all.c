/*
** EPITECH PROJECT, 2022
** network
** File description:
** rien
*/

#include "my_rpg.h"

static void add_ptr_all(all_ruru *all)
{
    add_ptr_to_all_malloc(all->spell, NORMAL, MALLOC);
    add_ptr_to_all_malloc(all, NORMAL, MALLOC);
    add_ptr_to_all_malloc(all->pnj, NORMAL, MALLOC);
    add_ptr_to_all_malloc(all->window, NORMAL, MALLOC);
    add_ptr_to_all_malloc(all->player, NORMAL, MALLOC);
    add_ptr_to_all_malloc(all->enemy, NORMAL, MALLOC);
    add_ptr_to_all_malloc(all->view, NORMAL, MALLOC);
    add_ptr_to_all_malloc(all->fps, NORMAL, MALLOC);
    add_ptr_to_all_malloc(all->ray, NORMAL, MALLOC);
}

all_ruru *ressource_all(startscreen_t *start)
{
    all_ruru *all = malloc(sizeof(all_ruru));
    all->malloc = NULL;
    all->map = ressource_map(all);
    if (all->map == NULL) {
        free_all_malloc(&all->malloc);
        return NULL;
    }
    all->start = start;
    all->window = ressource_window(all);
    all->fps = ressource_fps(all);
    all->player = ressource_player(all);
    all->ray = ressource_ray(all);
    all->enemy = ressource_enemy(all);
    all->pnj = ressource_pnj(all);
    all->view = ressource_view(all);
    all->spell = ressource_spell(all);
    add_ptr_all(all);
    return all;
}
