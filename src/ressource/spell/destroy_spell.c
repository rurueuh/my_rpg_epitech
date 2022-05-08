/*
** EPITECH PROJECT, 2022
** my_defender_restructure
** File description:
** destroy_spell
*/

#include "my_rpg.h"

void destroy_spell(all_ruru *all)
{
    sfSprite_destroy(all->spell->sprite_electrical);
    sfSprite_destroy(all->spell->sprite_explo);
    sfSprite_destroy(all->spell->sprite_slow);
    sfSprite_destroy(all->spell->sprite_panel);
    sfTexture_destroy(all->spell->texture_icon);
    sfTexture_destroy(all->spell->texture_panel);
    destroy_electrical(all);
    destroy_slow(all);
    destroy_explosion(all);
    free(all->spell);
}
