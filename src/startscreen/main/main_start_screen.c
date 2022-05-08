/*
** EPITECH PROJECT, 2022
** main_start_screen.c
** File description:
** start screen
*/

#include "my_rpg.h"

int startscreen_main(void)
{
    startscreen_t *start = start_ressource_all();

    sfMusic_play(start->main->music);
    while (sfRenderWindow_isOpen(start->window->window)
    && !sfKeyboard_isKeyPressed(sfKeyEscape)) {
        if (start_event_main(start) == 84) {
            sfMusic_destroy(start->main->music);
            my_printf("Please leave our poor game alone.\n");
            return 84;
        }
        start_anim_main(start);
        start_draw_all(start);
    }
    return 0;
}
