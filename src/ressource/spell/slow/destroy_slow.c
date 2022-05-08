/*
** EPITECH PROJECT, 2022
** my_defender_restructure
** File description:
** destroy_electrical
*/

#include "my_rpg.h"

void destroy_slow(all_ruru *all)
{
    if (all->spell->slow_t->couldown != NULL)
        sfClock_destroy(all->spell->slow_t->couldown);
    sfClock_destroy(all->spell->slow_t->anim);
    sfSprite_destroy(all->spell->slow_t->sprite);
    sfTexture_destroy(all->spell->slow_t->texture);
    sfSound_destroy(all->spell->slow_t->slow_sound);
    sfSoundBuffer_destroy(all->spell->slow_t->slow_buffer);
    free(all->spell->slow_t);
    return;
}
