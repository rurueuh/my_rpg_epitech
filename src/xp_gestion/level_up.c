/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** level_up
*/

#include "my_rpg.h"

void level_up(all_ruru *all, class_t *class)
{
    if (class->stats.exp >= class->stats.max_exp) {
        class->stats.exp = 0;
        class->stats.max_exp += 100;
        class->stats.hp.hp += 10;
        class->stats.hp.max_hp += 10;
        class->stats.mp.mp += 10;
        class->stats.mp.max_mp += 10;
        class->stats.attack += 2;
        class->stats.defense += 2;
        class->stats.speed += 1;
        class->stats.lvl += 1;
        rr_texti_update(class->stats.lvl, class->stats.lvl_text);
    }
}
