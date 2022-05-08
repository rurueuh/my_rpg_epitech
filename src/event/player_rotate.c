/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** player_rotate
*/

#include "my_rpg.h"

static void get_direction_col_player(all_ruru *all)
{
    if (all->player->direction == 270)
        all->player->rect_col = 0;
    if (all->player->direction == 180)
        all->player->rect_col = 1;
    if (all->player->direction == 0)
        all->player->rect_col = 2;
    if (all->player->direction == 90)
        all->player->rect_col = 3;
    if (all->player->direction == 225)
        all->player->rect_col = 4;
    if (all->player->direction == 135)
        all->player->rect_col = 5;
    if (all->player->direction == 315)
        all->player->rect_col = 6;
    if (all->player->direction == 45)
        all->player->rect_col = 7;
}

void update_direction_player(all_ruru *all)
{
    get_direction_col_player(all);
    sfSprite_setTextureRect(all->player->sprite, all->player->rect
    [all->player->rect_col][all->player->actual_rect]);
}

static void special_case_slowly(all_ruru *all)
{
    if (all->player->direction == 0 && all->player->direction_tmp == 315){
        all->player->direction = 360;
        return;
    }
    if (all->player->direction == 315 && all->player->direction_tmp == 0){
        all->player->direction = 0;
        return;
    }
}

static void update_direction_player_slowly(all_ruru *all)
{
    if (all->player->clock_direction_anim == NULL){
        all->player->clock_direction_anim = sfClock_create();
        add_ptr_to_all_malloc(CLOCK_ANIM, CLOCK, MALLOC);
    }
    if (rr_getclock(all->player->clock_direction_anim) > 0.01){
        sfClock_restart(all->player->clock_direction_anim);
        special_case_slowly(all);
        if (all->player->direction_tmp > all->player->direction)
            all->player->direction += 5;
        else if (all->player->direction_tmp < all->player->direction)
            all->player->direction -= 5;
        else {
            all->player->direction_anim_active = sfFalse;
            my_free(all->player->clock_direction_anim, MALLOC);
            all->player->clock_direction_anim = NULL;
        }
        all->player->direction = fmod(360 +
        fmod(all->player->direction, 360), 360);
    }
}

void event_player_rotate(all_ruru *all)
{
    if (rr_getclock(all->player->clock_input) > 0.1
    && all->player->direction_anim_active == sfFalse) {
        if (sfKeyboard_isKeyPressed(sfKeyA)) {
            all->player->direction_tmp += 45;
            sfClock_restart(all->player->clock_input);
            all->player->direction_anim_active = sfTrue;
        }
        if (sfKeyboard_isKeyPressed(sfKeyE)) {
            all->player->direction_tmp -= 45;
            sfClock_restart(all->player->clock_input);
            all->player->direction_anim_active = sfTrue;
        }
        all->player->direction_tmp = fmod(360 +
        fmod(all->player->direction_tmp, 360), 360);
        update_direction_player(all);
    }
    if (all->player->direction_anim_active == sfTrue) {
        update_direction_player_slowly(all);
    }
}
