/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** main_pnj
*/

#include "my_rpg.h"

static void active_pnj(pnj_t *pnj, all_ruru *all)
{
    if (pnj->clock == NULL) {
        pnj->clock = sfClock_create();
        pnj->text.clock = sfClock_create();
        add_ptr_to_all_malloc(pnj->clock, CLOCK, MALLOC);
        add_ptr_to_all_malloc(pnj->text.clock, CLOCK, MALLOC);
    }
    while (1) {
        float sec = rr_getclock(pnj->clock);
        draw_pnj_interface(all);
        if (sec >= 7)
            break;
    }
    pnj->active = sfFalse;
}

void event_pnj(all_ruru *all)
{
    if (sfMouse_isButtonPressed(sfMouseLeft) && all->pnj->active == sfTrue) {
        v2f mouse_pos = get_mouse_position(all);
        sfFloatRect rect_pnj = sfSprite_getGlobalBounds(all->pnj->sprite);
        sfFloatRect mouse = {mouse_pos.x, mouse_pos.y, 1, 1};
        if (rr_collide(rect_pnj, mouse)) {
            active_pnj(all->pnj, all);
            active_choose_pnj(all);
        }
    }
}
