/*
** EPITECH PROJECT, 2022
** my_defender_restructure
** File description:
** destroy_electrical
*/

#include "my_rpg.h"

void destroy_electrical(all_ruru *all)
{
    if (all->spell->electric_t->couldown != NULL)
        sfClock_destroy(all->spell->electric_t->couldown);
    sfSprite_destroy(all->spell->electric_t->sprite);
    sfTexture_destroy(all->spell->electric_t->texture);
    sfSound_destroy(all->spell->electric_t->electric_sound);
    sfSoundBuffer_destroy(all->spell->electric_t->electric_buffer);
    free(all->spell->electric_t);
    return;
}
