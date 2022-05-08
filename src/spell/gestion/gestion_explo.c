/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** gestion_elec
*/

#include "my_rpg.h"

void gestion_spell_explo(all_ruru *all)
{
    explosition_t *explo = all->spell->explo_t;

    if (explo->couldown == NULL)
        return;
    float sec = rr_getclock(explo->couldown);
    int i = sec / 0.19;
    if (i > 4){
        explo->active = sfFalse;
        sfSprite_setTextureRect(explo->sprite, explo->rect[0]);
        if (sec >= 2){
            my_free(explo->couldown, MALLOC);
            explo->couldown = NULL;
            sfColor black_block = sfColor_fromRGBA(255, 255, 255, 255);
            sfSprite_setColor(all->spell->sprite_explo, black_block);
        }
        return;
    }
    sfSprite_setPosition(explo->sprite, rr_2f_2i(explo->position));
    sfSprite_setTextureRect(explo->sprite, explo->rect[i]);
}
