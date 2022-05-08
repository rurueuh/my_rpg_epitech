/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** start_event
*/

#include "my_rpg.h"

static void event_keypress(startscreen_t *start)
{
    if (start->window->evt.key.code == sfKeySpace
    && start->anim->active == sfTrue)
        start_finish_anim_start(start);
    if (start->window->evt.key.code == sfKeyEscape)
        sfRenderWindow_close(start->window->window);
}

static void event_set_visible(startscreen_t *start)
{
    if (sfRenderWindow_isOpen(start->window->window))
        sfRenderWindow_setVisible(start->window->window, sfTrue);
}

static int event_clickpress(startscreen_t *start)
{
    if (start->window->evt.type == sfEvtMouseButtonReleased) {
        if (rr_touch_sprite(start->button->qui, start->window->window)) {
            sfMusic_stop(start->main->music);
            sfMusic_destroy(start->main->music);
            sfRenderWindow_close(start->window->window);
        }
        if (rr_touch_sprite(start->button->res, start->window->window)) {
            sfMusic_stop(start->main->music);
            start->main->stat == sfFalse;
            sfRenderWindow_setVisible(start->window->window, sfFalse);
            if (game(start) == 84)
                return 84;
            event_set_visible(start);
            sfMusic_play(start->main->music);
            start->main->stat = sfTrue;
        }
        if (rr_touch_sprite(start->button->set, start->window->window)) {
            settings(start);
        }
    }
}

static void event_change_button(startscreen_t *start)
{
    if (rr_touch_sprite(start->button->qui, start->window->window))
        start->button->qui = rr_sprite_scale(start->button->qui_y
        , rr_2f(1250 , 648), rr_2f(1.13, 1.2));
    else
        start->button->qui = rr_sprite_scale(start->button->qui_n
        , rr_2f(1250 , 640), rr_2f(1.13, 1.2));
    if (rr_touch_sprite(start->button->res, start->window->window))
        start->button->res = rr_sprite_scale(start->button->res_y
        , rr_2f(1250 , 140), rr_2f(1.13, 1.2));
    else
        start->button->res = rr_sprite_scale(start->button->res_n
        , rr_2f(1250 , 132), rr_2f(1.13, 1.2));
    if (rr_touch_sprite(start->button->set, start->window->window))
        start->button->set = rr_sprite_scale(start->button->set_y
        , rr_2f(1250 , 372), rr_2f(1.13, 1.2));
    else
        start->button->set = rr_sprite_scale(start->button->set_n
        , rr_2f(1250 , 364), rr_2f(1.13, 1.2));
}

int start_event_main(startscreen_t *start)
{
    int screen = 0;

    while (sfRenderWindow_pollEvent(start->window->window
    , &start->window->evt)) {
        event_change_button(start);
        if (start->window->evt.type == sfEvtClosed)
            sfRenderWindow_close(start->window->window);
        event_keypress(start);
        if (event_clickpress(start) == 84)
            return 84;
    }
}
