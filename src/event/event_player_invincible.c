/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** event_player_invincible
*/

#include "my_rpg.h"

sfBool event_player_invincible(all_ruru *all)
{
    if (all->player->class.stats.hp.hp <= 0){
        return sfTrue;
    }
    if (all->player->clock_invincible == NULL)
        return sfFalse;
    float sec = rr_getclock(all->player->clock_invincible);
    if (sec > 0.5) {
        my_free(all->player->clock_invincible, MALLOC);
        all->player->clock_invincible = NULL;
    }
    return sfFalse;
}
