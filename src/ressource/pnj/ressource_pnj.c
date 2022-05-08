/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** ressource_pnj
*/

#include "my_rpg.h"

static void ressource_selector(pnj_t *pnj)
{
    pnj->selector.texture[0] = rr_texture("michel/image/blue.png", sfTrue);
    pnj->selector.texture[1] = rr_texture("michel/image/red.png", sfTrue);
    pnj->selector.sprite[0] = rr_sprite(pnj->selector.texture[0], (v2f){0, 0});
    pnj->selector.sprite[1] = rr_sprite(pnj->selector.texture[1]
    , (v2f){960, 540});
    pnj->selector.selector = 0;
}
static void ressource_text(pnj_t *pnj)
{
    pnj->text.bubulle_texture = rr_texture("michel/image/bulle.png", sfTrue);
    pnj->text.bubulle_sprite = rr_sprite_scale(pnj->text.bubulle_texture
    , rr_2f(500, 400 - 100), rr_2f(2, 2));
    pnj->text.texture = rr_texture("michel/image/blah.png", sfTrue);
    pnj->text.sprite[0] = rr_sprite_scale(pnj->text.texture
    , rr_2f(500, 550 - 100), rr_2f(1, 1));
    pnj->text.sprite[1] = rr_sprite_scale(pnj->text.texture
    , rr_2f(600, 550 - 100), rr_2f(1, 1));
    pnj->text.sprite[2] = rr_sprite_scale(pnj->text.texture
    , rr_2f(700, 550 - 100), rr_2f(1, 1));
    pnj->text.active = sfFalse;
    pnj->text.clock = NULL;
}

pnj_t *ressource_pnj(all_ruru *all)
{
    pnj_t *pnj = malloc(sizeof(pnj_t));
    pnj->active = sfTrue;
    pnj->texture = rr_texture("michel/image/npc.png", sfTrue);
    pnj->sprite = rr_sprite(pnj->texture, (v2f) {500, 500});
    pnj->clock = NULL;
    ressource_text(pnj);
    ressource_selector(pnj);
    return pnj;
}
