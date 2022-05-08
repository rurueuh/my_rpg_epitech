/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** start_ressource_all
*/

#include "my_rpg.h"

startscreen_t *start_ressource_all(void)
{
    startscreen_t *start = malloc(sizeof(startscreen_t));

    start->window = startscreen_ressource_window(start);
    start->button = start_ressource_button(start);
    start->main = start_ressource_main_page(start);
    start->anim = start_ressource_anim(start);
    start->settings = settings_ressource(start);
    return start;
}
