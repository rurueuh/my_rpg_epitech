/*
** EPITECH PROJECT, 2022
** settings myrpg
** File description:
** settings rpg
*/

#include "my_rpg.h"

void settings_event_cursor(startscreen_t *start)
{
    if (rr_touch_sprite(QUIT, start->window->window))
        QUIT = rr_sprite_scale(QUI_Y, BUTTON_QUI_Y);
    else
        QUIT = rr_sprite_scale(QUI_N, rr_2f(1250 , 640), rr_2f(1.2, 1.2));
    if (rr_touch_sprite(VSY_N, start->window->window))
        VSY_N = rr_sprite_scale(OFF_Y, rr_2f(1280 , 255), rr_2f(0.5, 0.5));
    else
        VSY_N = rr_sprite_scale(OFF_N, rr_2f(1280 , 255), rr_2f(0.5, 0.5));
    if (rr_touch_sprite(THR_Y, start->window->window))
        THR_Y = rr_sprite_scale(ON_Y, BUTTON_THR_Y);
    else
        THR_Y = rr_sprite_scale(ON_N, BUTTON_THR_Y);
    if (rr_touch_sprite(THR_N, start->window->window))
        THR_N = rr_sprite_scale(OFF_Y, BUTTON_THR_N);
    else
        THR_N = rr_sprite_scale(OFF_N, rr_2f(1280 , 425), rr_2f(0.5, 0.5));
    if (rr_touch_sprite(VSY_Y, start->window->window))
        VSY_Y = rr_sprite_scale(ON_Y, rr_2f(1505, 305), rr_2f(0.5, 0.5));
    else
        VSY_Y = rr_sprite_scale(ON_N, rr_2f(1505 , 305), rr_2f(0.5, 0.5));
}

void settings_draw(startscreen_t *start)
{
    sfRenderWindow_clear(start->window->window, sfBlack);
    rr_window_sprite(start->settings->ground, start->window->window);
    rr_window_sprite(start->settings->quit, start->window->window);
    rr_window_sprite(start->settings->vsy_y, start->window->window);
    rr_window_sprite(start->settings->vsy_n, start->window->window);
    rr_window_sprite(start->settings->thr_y, start->window->window);
    rr_window_sprite(start->settings->thr_n, start->window->window);
    rr_window_sprite(start->settings->thr, start->window->window);
    rr_window_sprite(start->settings->vsy, start->window->window);
    sfRenderWindow_display(start->window->window);
}

void settings_event(startscreen_t *start)
{
    if (start->window->evt.type == sfEvtMouseButtonReleased) {
        if (my_mouse_touch_sprite(start->window->window, QUIT))
            start->settings->active = sfFalse;
        if (my_mouse_touch_sprite(start->window->window, THR_N)) {
            sfSprite_setColor(start->settings->vsy, sfRed);
            start->window->vsync = sfFalse;
        }
        if (my_mouse_touch_sprite(start->window->window, THR_Y)) {
            sfSprite_setColor(start->settings->vsy, sfGreen);
            start->window->vsync = sfTrue;
        }
        if (my_mouse_touch_sprite(start->window->window, VSY_N)) {
            sfSprite_setColor(start->settings->thr, sfRed);
            start->window->thread = sfFalse;
        }
        if (my_mouse_touch_sprite(start->window->window, VSY_Y)) {
            sfSprite_setColor(start->settings->thr, sfGreen);
            start->window->thread = sfTrue;
        }
    }
}

void settings_event_keep(startscreen_t *start)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (rr_touch_sprite(VSY_N, start->window->window))
            VSY_N = rr_sprite_scale(OFF_K, BUTTON_FULN);
        else
            VSY_N = rr_sprite_scale(OFF_N, BUTTON_FULN);
        if (rr_touch_sprite(THR_Y, start->window->window))
            THR_Y = rr_sprite_scale(ON_K, BUTTON_THRY);
        else
            THR_Y = rr_sprite_scale(ON_N, BUTTON_THRY);
        if (rr_touch_sprite(THR_N, start->window->window))
            THR_N = rr_sprite_scale(OFF_K, rr_2f(1280 , 425), rr_2f(0.5, 0.5));
        else
            THR_N = rr_sprite_scale(OFF_N, rr_2f(1280 , 425), rr_2f(0.5, 0.5));
        if (rr_touch_sprite(VSY_Y, start->window->window))
            VSY_Y = rr_sprite_scale(ON_K, rr_2f(1505, 305), rr_2f(0.5, 0.5));
        else
            VSY_Y = rr_sprite_scale(ON_N, rr_2f(1505 , 305), rr_2f(0.5, 0.5));
    }
}

void settings(startscreen_t *start)
{
    while (1) {
        settings_draw(start);
        settings_event_cursor(start);
        settings_event_keep(start);
        while (sfRenderWindow_pollEvent(start->window->window
        , &start->window->evt))
            settings_event(start);
        if (start->settings->active == sfFalse)
            break;
    }
    start->settings->active = sfTrue;
}
