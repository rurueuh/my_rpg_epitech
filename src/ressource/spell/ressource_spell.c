/*
** EPITECH PROJECT, 2022
** new_lib.csfml
** File description:
** ressource_all
*/

#include "my_rpg.h"

void spell_icon(spell_t *spell)
{
    spell->rect_electrical = rr_intrect(6, 5, 76, 75);
    spell->rect_slow = rr_intrect(245, 84, 76, 75);
    spell->rect_explo = rr_intrect(325, 83, 76, 75);
    spell->texture_icon = rr_texture("michel/image/spell.png", sfTrue);
    spell->sprite_electrical = rr_sprite_rect(spell->texture_icon
    , rr_2f(30, 30), spell->rect_electrical);
    spell->sprite_slow = rr_sprite_rect(spell->texture_icon
    , rr_2f(75 + 35, 30), spell->rect_slow);
    spell->sprite_explo = rr_sprite_rect(spell->texture_icon
    , rr_2f(150 + 40, 30), spell->rect_explo);
}

spell_t *ressource_spell(all_ruru *all)
{
    spell_t *spell = malloc(sizeof(spell_t));
    spell_icon(spell);
    spell->texture_panel = rr_texture("michel/image/panel.png", sfTrue);
    spell->sprite_panel = rr_sprite_scale(spell->texture_panel, rr_2f(0, 0)
    , rr_2f(0.55, 0.55));
    spell->electric_t = ressource_eletrical(all);
    spell->slow_t = ressource_slow(all);
    spell->explo_t = ressource_explosion(all);
    spell->arrow_t = ressource_arrow(all);
    spell->sword_t = ressource_sword(all);
    return spell;
}
