/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** ressource_sword
*/

#include "my_rpg.h"

sword_t *ressource_sword(all_ruru *all)
{
    sword_t *sword = malloc(sizeof(sword_t));
    sword->active = sfFalse;
    sword->level = 1;
    sword->mana = 0;
    sword->damage = 10;
    sword->couldown = NULL;
    sword->circle_radius = rr_circle_outl(rr_2f(0, 0), 200, sfRed, 3);
    return sword;
}
