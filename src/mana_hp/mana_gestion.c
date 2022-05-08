/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** mana_gestion
*/

#include "my_rpg.h"

static void gestion_bar(all_ruru *all, stats_t *stats)
{
    float size_mana = (float) stats->mp.mp / stats->mp.max_mp * 100;
    float size_hp = (float) stats->hp.hp / stats->hp.max_hp * 100;

    size_mana *= 6;
    size_hp *= 6;
    sfRectangleShape_setSize(stats->mp.mp_bar, rr_2f(size_mana, 100));
    sfRectangleShape_setSize(stats->hp.hp_bar, rr_2f(size_hp, 100));
}

static void regen_slowly_mana(all_ruru *all, stats_t *stats)
{
    float sec = rr_getclock(stats->mp.regen_mp);
    int to_add = sec / REGEN_TIME_MANA;

    if (sec > REGEN_TIME_MANA) {
        if (stats->mp.mp + to_add > stats->mp.max_mp) {
            stats->mp.mp = stats->mp.max_mp;
        } else {
            stats->mp.mp += to_add;
        }
        sfClock_restart(stats->mp.regen_mp);
    }
}

void mana_hp_gestion(all_ruru *all)
{
    gestion_bar(all, &all->player->class.stats);
    regen_slowly_mana(all, &all->player->class.stats);
}
