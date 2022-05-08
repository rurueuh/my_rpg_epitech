/*
** EPITECH PROJECT, 2022
** my_defender_restructure
** File description:
** ressource_electical
*/

#include "my_rpg.h"

void rect_explo(explosition_t *explo)
{
    explo->rect[0] = rr_intrect(0, 0, 241, 231);
    explo->rect[1] = rr_intrect(215, 0, 241, 231);
    explo->rect[2] = rr_intrect(440, 0, 241, 231);
    explo->rect[3] = rr_intrect(685, 0, 241, 231);
    explo->rect[4] = rr_intrect(0, 203, 241, 231);
    explo->rect[5] = rr_intrect(235, 203, 241, 231);
    explo->rect[6] = rr_intrect(474, 215, 241, 219);
    explo->rect[7] = rr_intrect(685, 231, 241, 203);
}

explosition_t *ressource_explosion(all_ruru *all)
{
    explosition_t *explosition = malloc(sizeof(explosition_t));
    explosition->explode_buffer = sfSoundBuffer_createFromFile(
        "michel/sound/spells/fire_explode.wav");
    explosition->explode_sound = sfSound_create();
    sfSound_setBuffer(explosition->explode_sound, explosition->explode_buffer);
    sfSound_setVolume(explosition->explode_sound, 50);
    explosition->active = sfFalse;
    explosition->mana = 100;
    explosition->level = 1;
    explosition->damage = 10;
    explosition->couldown = NULL;
    explosition->position = rr_2i(0, 0);
    rect_explo(explosition);
    explosition->texture = rr_texture("michel/image/explo.png", sfTrue);
    explosition->sprite = rr_sprite_rect(explosition->texture, rr_2f(0, 0)
    , explosition->rect[0]);
    return explosition;
}
