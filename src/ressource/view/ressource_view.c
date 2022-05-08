/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** ressource_view
*/

#include "my_rpg.h"

ruru_view *ressource_view(all_ruru *all)
{
    ruru_view *viewe = malloc(sizeof(ruru_view));
    viewe->x = 3200;
    viewe->y = 1800;
    sfFloatRect rect = {0, 0, viewe->x, viewe->y};
    viewe->rect = rect;
    viewe->view = sfView_createFromRect(viewe->rect);
    return viewe;
}
