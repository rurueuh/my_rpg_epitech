/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** ressource_fps
*/

#include "my_rpg.h"

fps_ruru *ressource_fps(all_ruru *all)
{
    fps_ruru *fps = malloc(sizeof(fps_ruru));
    fps->clock = sfClock_create();
    fps->font = sfFont_createFromFile("michel/police/arial.ttf");
    fps->text = rr_texti(rr_2f(0, 0), 10, fps->font, 30);
    fps->frame_per_seconds = 0;
    fps->seconds = 0;
    add_ptr_to_all_malloc(fps->clock, CLOCK, MALLOC);
    add_ptr_to_all_malloc(fps->font, FONT, MALLOC);
    add_ptr_to_all_malloc(fps->text, TEXT, MALLOC);
    return fps;
}
