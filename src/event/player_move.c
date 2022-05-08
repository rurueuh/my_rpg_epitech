/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** player_move
*/

#include "my_rpg.h"

void player_go_right(float *x, float *y, int speed, all_ruru *all)
{
    int direction = get_degrees(all->player->direction);

    if (sfKeyboard_isKeyPressed(sfKeyD)) {
        if ((int) *x != 0 && (int) *y != 0) {
            *x -= (speed / 2)* cos(deg_to_rad(direction + 90));
            *y += (speed / 2)* sin(deg_to_rad(direction + 90));
        } else {
            *x -= speed * cos(deg_to_rad(direction + 90));
            *y += speed * sin(deg_to_rad(direction + 90));
        }
    }
}

void player_go_left(float *x, float *y, int speed, all_ruru *all)
{
    int direction = get_degrees(all->player->direction);

    if (sfKeyboard_isKeyPressed(sfKeyQ)) {
        if ((int) *x != 0 && (int) *y != 0) {
            *x -= (speed / 2) * cos(deg_to_rad(direction - 90));
            *y += (speed / 2) * sin(deg_to_rad(direction - 90));
        } else {
            *x -= speed * cos(deg_to_rad(direction - 90));
            *y += speed * sin(deg_to_rad(direction - 90));
        }
    }
}

void player_go_up(float *x, float *y, int speed, all_ruru *all)
{
    int direction = get_degrees(all->player->direction);

    if (sfKeyboard_isKeyPressed(sfKeyZ)) {
        if ((int) *x != 0 && (int) *y != 0) {
            *x += (speed / 2) * cos(deg_to_rad(direction));
            *y -= (speed / 2) * sin(deg_to_rad(direction));
        } else {
            *x += speed * cos(deg_to_rad(direction));
            *y -= speed * sin(deg_to_rad(direction));
        }
    }
}

void player_go_down(float *x, float *y, int speed, all_ruru *all)
{
    int direction = get_degrees(all->player->direction);

    if (sfKeyboard_isKeyPressed(sfKeyS)) {
        if ((int) *x != 0 && (int) *y != 0) {
            *x -= (speed / 2) * cos(deg_to_rad(direction));
            *y += (speed / 2) * sin(deg_to_rad(direction));
        } else {
            *x -= speed * cos(deg_to_rad(direction));
            *y += speed * sin(deg_to_rad(direction));
        }
    }
}

void event_move_player(all_ruru *all)
{
    float x = 0;
    float y = 0;
    int speed = 5;
    float sec = rr_getclock(all->player->clock_mouvement);

    if (sec > 0.01) {
        player_go_down(&x, &y, speed, all);
        player_go_up(&x, &y, speed, all);
        player_go_right(&x, &y, speed, all);
        player_go_left(&x, &y, speed, all);
        if (x != 0 || y != 0)
            all->player->is_walking = sfTrue;
        else
            all->player->is_walking = sfFalse;
        if (collision_main(all, x, y, all->player->sprite))
            sfSprite_move(all->player->sprite, rr_2f(x, y));
        sfClock_restart(all->player->clock_mouvement);
    }
}
