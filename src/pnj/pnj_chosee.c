/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** pnj_chosee
*/

#include "my_rpg.h"

static sfBool choose_selector(pnj_t *pnj, all_ruru *all)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        v2f mouse_pos = get_mouse_position(all);
        sfFloatRect red = sfSprite_getGlobalBounds(pnj->selector.sprite[0]);
        sfFloatRect blue = sfSprite_getGlobalBounds(pnj->selector.sprite[1]);
        if (rr_collide(red, (sfFloatRect){mouse_pos.x, mouse_pos.y, 1, 1})) {
            pnj->selector.selector = 0;
            return sfTrue;
        }
        if (rr_collide(blue, (sfFloatRect){mouse_pos.x, mouse_pos.y, 1, 1})) {
            pnj->selector.selector = 1;
            return sfTrue;
        }
    }
    return sfFalse;
}

static void choose_pnj(pnj_t *pnj, all_ruru *all)
{
    if (pnj->selector.selector == 1) {
        all->player->class.attack_func = &active_attack_sword;
        all->player->class.spell_w = &active_spell_explo;
    }
    if (pnj->selector.selector == 0) {
        all->player->class.attack_func = &active_attack_arrow;
        all->player->class.spell_w = &active_spell_elec;
    }
}

void active_choose_pnj(all_ruru *all)
{
    while (1) {
        sfRenderWindow_clear(all->window->window, sfBlack);
        rr_window_sprite(all->pnj->selector.sprite[0], all->window->window);
        rr_window_sprite(all->pnj->selector.sprite[1], all->window->window);
        sfRenderWindow_display(all->window->window);
        if (choose_selector(all->pnj, all))
            break;
    }
    choose_pnj(all->pnj, all);
}
