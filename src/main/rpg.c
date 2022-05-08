/*
** EPITECH PROJECT, 2022
** startscreen
** File description:
** startscreen_main
*/

#include "my_rpg.h"

void thread_gestion(all_ruru *all)
{
    if (all->start->window->thread == sfTrue) {
        sfThread_launch(all->ray->thread[0]);
        sfThread_launch(all->ray->thread[1]);
        sfThread_launch(all->ray->thread[2]);
        sfThread_wait(all->ray->thread[0]);
        sfThread_wait(all->ray->thread[1]);
        sfThread_wait(all->ray->thread[2]);
    } else {
        thread_ray_cast(all);
        thread_ray_cast2(all);
        thread_ray_cast3(all);
    }
}

int game(startscreen_t *start)
{
    all_ruru *all = ressource_all(start);
    if (all == NULL)
        return 84;

    while (sfRenderWindow_isOpen(all->window->window)) {
        if (event_gestion(all) == sfTrue)
            break;
        thread_gestion(all);
        main_enemy(all);
        anim_move_player(all);
        mana_hp_gestion(all);
        level_up(all, &all->player->class);
        view_gestion(all);
        gestion_spell_all(all);
        rotate_ray_player(all);
        gestion_fps(all);
        draw_gestion(all);
    }
    destroy_all(all);
    return 0;
}
