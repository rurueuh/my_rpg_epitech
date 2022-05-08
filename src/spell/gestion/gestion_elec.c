/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** gestion_elec
*/

#include "my_rpg.h"

void gestion_spell_elec(all_ruru *all)
{
    electrical_t *elec = all->spell->electric_t;

    if (elec->couldown == NULL)
        return;
    float sec = rr_getclock(elec->couldown);
    int i = sec / 0.25;
    if (i > 4){
        elec->active = sfFalse;
        sfSprite_setTextureRect(elec->sprite, elec->rect[0]);
        if (sec >= 2){
            my_free(elec->couldown, MALLOC);
            elec->couldown = NULL;
            sfColor black_block = sfColor_fromRGBA(255, 255, 255, 255);
            sfSprite_setColor(all->spell->sprite_electrical, black_block);
        }
        return;
    }
    sfSprite_setPosition(elec->sprite, rr_2f_2i(elec->position));
    sfSprite_setTextureRect(elec->sprite, elec->rect[i]);
}
