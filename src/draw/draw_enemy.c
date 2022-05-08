/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** draw_enemy
*/

#include "my_rpg.h"

void draw_enemy(all_ruru *all, sfRenderStates states)
{
    node_enemy *tmp = all->enemy->enemy_t;

    while (tmp) {
        sfRenderTexture_drawSprite(all->window->render_texture, tmp->sprite
        , &states);
        tmp = tmp->next;
    }
}
