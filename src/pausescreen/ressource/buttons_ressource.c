/*
** EPITECH PROJECT, 2022
** buttons_ressource.c
** File description:
** buttons for pause
*/

#include "my_rpg.h"

pause_t *pause_ressource(all_t *all)
{
    pause_t *pause = malloc(sizeof(pause_t));

    pause->qui_n = rr_texture("michel/image/pause/exi_n.png", sfTrue);
    pause->qui_y = rr_texture("michel/image/pause/exi_y.png", sfTrue);
    pause->men_n = rr_texture("michel/image/pause/men_n.png", sfTrue);
    pause->men_y = rr_texture("michel/image/pause/men_y.png", sfTrue);
    pause->res_n = rr_texture("michel/image/pause/con_n.png", sfTrue);
    pause->res_y = rr_texture("michel/image/pause/con_y.png", sfTrue);
    pause->quit = rr_sprite_scale(pause->qui_n, rr_2f(0, 0)
    , rr_2f(1.2, 1.2));
    pause->resume = rr_sprite_scale(pause->res_n, rr_2f(0 , 0)
    , rr_2f(1.2, 1.2));
    pause->menu = rr_sprite_scale(pause->men_n, rr_2f(0 , 0)
    , rr_2f(1.2, 1.2));
    pause->qui_co = rr_2f(0, 0);
    pause->men_co = rr_2f(0, 0);
    pause->res_co = rr_2f(0, 0);
    return pause;
}
