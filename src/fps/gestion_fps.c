/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** gestion_fps
*/

#include "my_rpg.h"

void gestion_fps(all_ruru *all)
{
    all->fps->time = sfClock_getElapsedTime(all->fps->clock);
    all->fps->seconds = all->fps->time.microseconds / 1000000.0;
    all->fps->frame_per_seconds = 1.0 / all->fps->seconds;
    sfClock_restart(all->fps->clock);
    rr_texti_update(all->fps->frame_per_seconds, all->fps->text);
}
