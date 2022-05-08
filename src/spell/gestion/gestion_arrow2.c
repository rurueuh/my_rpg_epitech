/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** gestion_arrow
*/

#include "my_rpg.h"

v2f get_pos_enemy_id(all_ruru *all, int id)
{
    node_enemy *tmp = all->enemy->enemy_t;
    v2f pos;
    sfFloatRect rect;

    while (tmp) {
        if (tmp->enemy_number == id){
            rect = sfSprite_getGlobalBounds(tmp->sprite);
            pos = sfSprite_getPosition(tmp->sprite);
            pos.x += rect.width / 2;
            pos.y += rect.height / 2;
            return pos;
        }
        tmp = tmp->next;
    }
    return (v2f){0, 0};
}

static sfFloatRect get_rect_enemy_id(all_ruru *all, int id)
{
    node_enemy *tmp = all->enemy->enemy_t;

    while (tmp) {
        if (tmp->enemy_number == id)
            return sfSprite_getGlobalBounds(tmp->sprite);
        tmp = tmp->next;
    }
    return (sfFloatRect){0, 0, 0, 0};
}

static void destroy_and_stop_arrow(all_ruru *all, arrow_t *arrow)
{
    my_free(arrow->couldown, MALLOC);
    arrow->couldown = NULL;
    arrow->active = sfFalse;
}

static void remove_enemy_hp_id(all_ruru *all, int id, int damage)
{
    node_enemy *tmp = all->enemy->enemy_t;
    node_enemy *tmp_tmp = all->enemy->enemy_t;

    while (tmp) {
        if (tmp->enemy_number == id) {
            tmp->hp -= damage;
        }
        if (tmp->hp <= 0) {
            tmp_tmp = tmp->next;
            remove_enemy_id(all, id);
            tmp = tmp_tmp;
        } else {
            tmp = tmp->next;
        }
    }
}

void gestion_attack_arrow_mob(all_ruru *all)
{
    sfFloatRect mob_rect = get_rect_enemy_id(all
    , all->spell->arrow_t->enemy_id_focus);
    sfFloatRect arrow_rect = sfSprite_getGlobalBounds(
        all->spell->arrow_t->sprite);

    if (rr_collide(mob_rect, arrow_rect)) {
        remove_enemy_hp_id(all, all->spell->arrow_t->enemy_id_focus
        , all->player->class.stats.attack);
        all->spell->arrow_t->active = sfFalse;
    }
}
