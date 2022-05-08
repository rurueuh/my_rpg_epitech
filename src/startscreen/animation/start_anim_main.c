/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** start_anim_main
*/

#include "my_rpg.h"

void start_finish_anim_start(startscreen_t *start)
{
    start->anim->active = sfFalse;
    start->main->active = sfTrue;
}

void start_anim_main(startscreen_t *start)
{
    if (start->anim->active == sfFalse)
        return;
    if (start->anim->clock == NULL)
        start->anim->clock = sfClock_create();
    float sec = rr_getclock(start->anim->clock);
    int i = sec / 0.06;
    if (i >= 65){
        sfClock_destroy(start->anim->clock);
        start->anim->clock = NULL;
        start_finish_anim_start(start);
    }
    sfSprite_setTextureRect(start->anim->sprite, start->anim->rect[i]);
    return;
}
