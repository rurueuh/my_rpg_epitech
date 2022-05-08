/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** gestion_all_spell
*/

#include "my_rpg.h"

void gestion_spell_all(all_ruru *all)
{
    gestion_spell_elec(all);
    gestion_spell_explo(all);
    gestion_attack_arrow(all);
    gestion_attack_sword(all);
}
