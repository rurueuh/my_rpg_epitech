/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** draw_pnj
*/

#include "my_rpg.h"

void draw_pnj(all_ruru *all)
{
    sfRenderTexture_drawSprite(RENDER_WINDOW, all->pnj->sprite, NULL);
}
