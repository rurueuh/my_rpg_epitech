/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** ressource_arrow
*/

#include "my_rpg.h"

arrow_t *ressource_arrow(all_ruru *all)
{
    arrow_t *arrow = malloc(sizeof(arrow_t));
    arrow->active = sfFalse;
    arrow->level = 1;
    arrow->mana = 0;
    arrow->damage = 10;
    arrow->couldown = NULL;
    arrow->speed = 6;
    arrow->texture = rr_texture("michel/image/arrow.png", sfTrue);
    arrow->sprite = rr_sprite_rect(arrow->texture
    , rr_2f(0, 0), rr_intrect(0, 0, 100, 100));
    arrow->circle_radius = rr_circle_outl(rr_2f(0, 0), 800, sfRed, 3);
    return arrow;
}
