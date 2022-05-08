/*
** EPITECH PROJECT, 2022
** main pause
** File description:
** main for pause
*/

#include "my_rpg.h"

v2f modif_pose(v2f pose, int x, int y)
{
    pose.x = pose.x + x;
    pose.y = pose.y + y;
    return pose;
}

void modif_sprite_pose(all_t *all)
{
    v2f pose_quit = sfSprite_getPosition(all->player->sprite);
    v2f pose_menu = sfSprite_getPosition(all->player->sprite);
    v2f pose_resume = sfSprite_getPosition(all->player->sprite);

    pose_quit = modif_pose(pose_quit, -500, 0);
    pose_menu = modif_pose(pose_menu, 220, 0);
    pose_resume = modif_pose(pose_resume, -150, -300);
    all->pause->menu = rr_sprite_scale(all->pause->men_n, pose_menu
    , rr_2f(1, 1));
    all->pause->resume = rr_sprite_scale(all->pause->res_n, pose_resume
    , rr_2f(1, 1));
    all->pause->quit = rr_sprite_scale(all->pause->qui_n, pose_quit
    , rr_2f(1, 1));
}

sfBool pause_menu(all_t *all)
{
    int stock = 0;

    all->pause = pause_ressource(all);
    modif_sprite_pose(all);
    while (1) {
        sfClock_restart(all->player->clock_mouvement);
        event_change_menu(all);
        draw_pause(all);
        stock = event_click_menu(all);
        if (stock == 1)
            return sfTrue;
        if (stock == 2)
            return sfFalse;
    }
}
