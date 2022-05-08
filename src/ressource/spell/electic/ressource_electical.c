/*
** EPITECH PROJECT, 2022
** my_defender_restructure
** File description:
** ressource_electical
*/

#include "my_rpg.h"

void elec_rect(electrical_t *elec)
{
    elec->rect[0] = rr_intrect(8, 9, 54, 175);
    elec->rect[1] = rr_intrect(103, 3, 43, 175);
    elec->rect[2] = rr_intrect(205, 11, 43, 175);
    elec->rect[3] = rr_intrect(313, 7, 43, 160);
    elec->rect[4] = rr_intrect(421, 2, 29, 165);
}

electrical_t *ressource_eletrical(all_ruru *all)
{
    electrical_t *electric = malloc(sizeof(electrical_t));
    electric->electric_sound = sfSound_create();
    electric->electric_buffer = sfSoundBuffer_createFromFile(
        "michel/sound/spells/electric_spell.wav");
    sfSound_setBuffer(electric->electric_sound, electric->electric_buffer);
    electric->active = sfFalse;
    electric->mana = 30;
    electric->level = 1;
    electric->couldown = NULL;
    electric->position = rr_2i(0, 0);
    electric->damage = 4;
    elec_rect(electric);
    electric->texture = rr_texture("michel/image/electrical.png", sfTrue);
    electric->sprite = rr_sprite_rect(electric->texture, rr_2f(0, 0)
    , electric->rect[0]);
    return electric;
}
