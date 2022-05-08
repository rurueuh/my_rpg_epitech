/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** start_ressource_start_anim
*/

#include "my_rpg.h"

static void rect_anim(start_animation *anim)
{
    int i = 0;
    for (int k = 0; k < 16; k++) {
        anim->rect[i] = rr_intrect(k * 500, 0, 500, 500);
        i++;
    }
    for (int k = 0; k < 16; k++) {
        anim->rect[i] = rr_intrect(k * 500, 450, 500, 500);
        i++;
    }
    for (int k = 0; k < 16; k++) {
        anim->rect[i] = rr_intrect(k * 500, 450 * 2, 500, 500);
        i++;
    }
    for (int k = 0; k < 16; k++) {
        anim->rect[i] = rr_intrect(k * 500, 450 * 3, 500, 500);
        i++;
    }
    anim->rect[64] = rr_intrect(0 * 500, 450 * 4, 500, 500);
    anim->rect[65] = rr_intrect(1 * 500, 450 * 4, 500, 500);
}

start_animation *start_ressource_anim(startscreen_t *start)
{
    start_animation *anim = malloc(sizeof(start_animation));
    anim->active = sfTrue;
    anim->clock = NULL;
    anim->texture = rr_texture("michel/image/f_anim.png", sfTrue);
    rect_anim(anim);
    anim->sprite = rr_sprite_rect(anim->texture, rr_2f(start->window->x
    / 2 - 250, start->window->y / 2 - 250), anim->rect[0]);
    return anim;
}
