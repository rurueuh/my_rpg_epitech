/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** view_gestion
*/

#include "my_rpg.h"

static void move_selector_pnj(all_ruru *all, v2f top)
{
    sfSprite_setPosition(all->pnj->selector.sprite[0], top);
    sfSprite_setPosition(all->pnj->selector.sprite[1]
    , (v2f) {top.x + 1600, top.y});
    sfText_setPosition(all->player->class.stats.lvl_text
    , (v2f) {top.x + 1600 * 2 - 100, top.y});
    sfText_setPosition(all->player->class.stats.level_text
    , (v2f) {top.x + 1600 * 2 - 200, top.y});
}

static void update_static_pos(all_ruru *all)
{
    sfVector2f rect = sfView_getCenter(all->view->view);
    sfVector2f size = sfView_getSize(all->view->view);
    sfVector2f topleft = {rect.x - size.x / 2, rect.y - size.y / 2};
    sfVector2f b = {rect.x - size.x / 2, rect.y + size.y / 2};

    sfText_setPosition(all->fps->text, rr_2f(topleft.x, topleft.y + 130));
    sfSprite_setPosition(all->spell->sprite_electrical, rr_2f(topleft.x
    + 30, topleft.y + 30));
    sfSprite_setPosition(all->spell->sprite_explo, rr_2f(topleft.x
    + 110, topleft.y + 30));
    sfSprite_setPosition(all->spell->sprite_slow, rr_2f(topleft.x
    + 190, topleft.y + 30));
    sfSprite_setPosition(all->spell->sprite_panel, topleft);
    sfRectangleShape_setPosition(STATS.hp.hp_bar_bg, rr_2f(b.x, b.y - 110));
    sfRectangleShape_setPosition(STATS.hp.hp_bar, rr_2f(b.x + 10, b.y - 100));
    sfRectangleShape_setPosition(STATS.mp.mp_bar_bg, rr_2f(b.x, b.y - 210));
    sfRectangleShape_setPosition(STATS.mp.mp_bar, rr_2f(b.x + 10, b.y - 200));
    move_selector_pnj(all, topleft);
}

void view_gestion(all_ruru *all)
{
    sfFloatRect player = sfSprite_getGlobalBounds(all->player->sprite);
    sfVector2f pos = {player.left +  player.height / 2
    , player.top + player.width / 2};
    sfView_setCenter(all->view->view, pos);
    update_static_pos(all);
    sfRenderWindow_setView(all->window->window, all->view->view);
}
