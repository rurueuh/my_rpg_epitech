/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** event_anim_move_player
*/

#include "my_rpg.h"

static void anim_move(all_ruru *all)
{
    if (rr_getclock(all->player->anim_clock) >= 0.3) {
        if (all->player->actual_rect == 0) {
            all->player->actual_rect = 1;
            all->player->is_back = 2;
        } else if (all->player->actual_rect == 2) {
            all->player->actual_rect = 1;
            all->player->is_back = 0;
        } else {
            all->player->actual_rect = all->player->is_back;
        }
        sfSprite_setTextureRect(all->player->sprite, all->player->rect
        [all->player->rect_col][all->player->actual_rect]);
        sfClock_restart(all->player->anim_clock);
    }
}

void anim_move_player(all_ruru *all)
{
    if (all->player->is_walking == sfTrue) {
        if (all->player->anim_clock == NULL) {
            all->player->anim_clock = sfClock_create();
            add_ptr_to_all_malloc(all->player->anim_clock, CLOCK, MALLOC);
        }
        anim_move(all);
    } else {
        if (all->player->anim_clock != NULL) {
            my_free(all->player->anim_clock, MALLOC);
            all->player->anim_clock = NULL;
            all->player->actual_rect = 1;
            sfSprite_setTextureRect(all->player->sprite, all->player->rect
            [all->player->rect_col][all->player->actual_rect]);
        }
    }
}
