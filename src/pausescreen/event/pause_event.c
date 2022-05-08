/*
** EPITECH PROJECT, 2022
** pause_event.c
** File description:
** event for pause
*/

#include "my_rpg.h"

int event_click_menu(all_t *all)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (tg_touch_sprite(all->pause->quit, all)) {
            sfRenderWindow_close(all->start->window->window);
            return 1;
        }
        if (tg_touch_sprite(all->pause->resume, all))
            return 2;
        if (tg_touch_sprite(all->pause->menu, all))
            return 1;
    }
}

void event_change_menu(all_t *all)
{
    if (tg_touch_sprite(all->pause->quit, all))
        sfSprite_setTexture(all->pause->quit, all->pause->qui_y, sfTrue);
    else
        sfSprite_setTexture(all->pause->quit, all->pause->qui_n, sfTrue);
    if (tg_touch_sprite(all->pause->resume, all))
        sfSprite_setTexture(all->pause->resume, all->pause->res_y, sfTrue);
    else
        sfSprite_setTexture(all->pause->resume, all->pause->res_n, sfTrue);
    if (tg_touch_sprite(all->pause->menu, all))
        sfSprite_setTexture(all->pause->menu, all->pause->men_y, sfTrue);
    else
        sfSprite_setTexture(all->pause->menu, all->pause->men_n, sfTrue);
}
