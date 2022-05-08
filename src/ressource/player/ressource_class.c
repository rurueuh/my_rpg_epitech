/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** ressource_class
*/

#include "my_rpg.h"

static void ressource_class_hp(hp_t *hp, all_ruru *all)
{
    hp->hp = 100;
    hp->max_hp = 100;
    hp->hp_bar = rr_rectsh_fill(rr_2f(0, 1000), rr_2f(300 * 2, 100), sfRed);
    hp->hp_bar_bg = rr_rectsh_fill(rr_2f(-5, 995), rr_2f(310 * 2, 110)
    , sfWhite);
    hp->regen_hp = sfClock_create();
    add_ptr_to_all_malloc(hp->regen_hp, CLOCK, MALLOC);
    add_ptr_to_all_malloc(hp->hp_bar, RECTSHAPE, MALLOC);
    add_ptr_to_all_malloc(hp->hp_bar_bg, RECTSHAPE, MALLOC);
}

static void ressource_class_mp(mp_t *mp, all_ruru *all)
{
    mp->mp = 100;
    mp->max_mp = 100;
    mp->mp_bar = rr_rectsh_fill(rr_2f(0, 1100), rr_2f(300 * 2, 100), sfBlue);
    mp->mp_bar_bg = rr_rectsh_fill(rr_2f(-5, 1095), rr_2f(310 * 2, 110)
    , sfWhite);
    mp->regen_mp = sfClock_create();
    add_ptr_to_all_malloc(mp->regen_mp, CLOCK, MALLOC);
    add_ptr_to_all_malloc(mp->mp_bar, RECTSHAPE, MALLOC);
    add_ptr_to_all_malloc(mp->mp_bar_bg, RECTSHAPE, MALLOC);
}

static void ressource_stats(stats_t *stats, all_ruru *all)
{
    ressource_class_hp(&stats->hp, all);
    ressource_class_mp(&stats->mp, all);
    stats->attack = 3;
    stats->max_exp = 100;
    stats->defense = 10;
    stats->speed = 3;
    stats->lvl = 1;
    stats->exp = 0;
    stats->level_text = rr_text(rr_2f(0, 0), "level:", all->fps->font, 50);
    stats->lvl_text = rr_texti(rr_2f(0, 0), stats->lvl, all->fps->font, 50);
    add_ptr_to_all_malloc(stats->lvl_text, TEXT, MALLOC);
}

void ressource_class(all_ruru *all, player_ruru *player)
{
    ressource_stats(&player->class.stats, all);
    player->class.attack_func = NULL;
    player->class.spell_w = NULL;
    player->class.spell_x = NULL;
}
