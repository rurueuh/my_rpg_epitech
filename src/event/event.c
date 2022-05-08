/*
** EPITECH PROJECT, 2022
** arrow
** File description:
** event
*/

#include "my_rpg.h"

sfBool event_gestion(all_ruru *all)
{
    if (!sfRenderWindow_hasFocus(all->window->window))
        return sfFalse;
    while (sfRenderWindow_pollEvent(all->window->window, &all->window->evt)){
        if (all->window->evt.type == sfEvtClosed)
            return sfTrue;
        if (all->window->evt.type == sfEvtKeyReleased
        && all->window->evt.key.code == sfKeyEscape)
            return pause_menu(all);
    }
    if (event_player_invincible(all))
        return sfTrue;
    event_player_rotate(all);
    event_enemy(all);
    event_pnj(all);
    event_move_player(all);
    event_spell(all);
    return sfFalse;
}
