/*
** EPITECH PROJECT, 2022
** my_defender_restructure
** File description:
** destroy_electrical
*/

#include "my_rpg.h"

void destroy_explosion(all_ruru *all)
{
    if (all->spell->explo_t->couldown != NULL)
        sfClock_destroy(all->spell->explo_t->couldown);
    sfSprite_destroy(all->spell->explo_t->sprite);
    sfTexture_destroy(all->spell->explo_t->texture);
    sfSound_destroy(all->spell->explo_t->explode_sound);
    sfSoundBuffer_destroy(all->spell->explo_t->explode_buffer);
    free(all->spell->explo_t);
    return;
}
