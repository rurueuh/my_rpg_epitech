/*
** EPITECH PROJECT, 2022
** my_defender_restructure
** File description:
** ressource_electical
*/

#include "my_rpg.h"

void part_one_anim(slow_t *slow)
{
    slow->rect[0] = rr_intrect(202, 2, 191, 185);
    slow->rect[1] = rr_intrect(393, 2, 191, 185);
    slow->rect[2] = rr_intrect(584, 2, 191, 185);
    slow->rect[3] = rr_intrect(775, 2, 191, 185);
    for (int i = 0; i < 5; i++)
        slow->rect[i + 4] = rr_intrect(191 * i, 187, 191, 185);
    for (int i = 0; i < 5; i++)
        slow->rect[i + 9] = rr_intrect(191 * i, 382, 191, 185);
    for (int i = 0; i < 5; i++)
        slow->rect[i + 14] = rr_intrect(191 * i, 567, 191, 185);
    for (int i = 0; i < 5; i++)
        slow->rect[i + 19] = rr_intrect(191 * i, 752, 191, 185);
    for (int i = 0; i < 5; i++)
        slow->rect[i + 24] = rr_intrect(191 * i, 937, 191, 185);
}

slow_t *ressource_slow(all_ruru *all)
{
    slow_t *slow = malloc(sizeof(slow_t));
    slow->slow_sound = sfSound_create();
    slow->slow_buffer = sfSoundBuffer_createFromFile(
        "michel/sound/spells/slow_spell.wav");
    sfSound_setBuffer(slow->slow_sound, slow->slow_buffer);
    sfSound_setVolume(slow->slow_sound, 40);
    slow->active = sfFalse;
    slow->mana = 30;
    slow->level = 1;
    slow->couldown = NULL;
    slow->anim = sfClock_create();
    slow->position = rr_2i(0, 0);
    part_one_anim(slow);
    slow->texture = rr_texture("michel/image/slow.png", sfTrue);
    slow->sprite = rr_sprite_rect(slow->texture, rr_2f(0, 0)
    , slow->rect[0]);
    return slow;
}
