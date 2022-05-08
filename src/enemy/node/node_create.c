/*
** EPITECH PROJECT, 2022
** test
** File description:
** node_create
*/

#include "my_rpg.h"

void setting_mob(node_enemy *enemy, all_ruru *all, sfVector2f pos)
{
    float x_mult = all->window->x / 1555.0;
    float y_mult = all->window->y / 1037.0;
    int x = (-100 + rand() % 100) * x_mult;
    int y = (470 + rand() % 100) * y_mult;
    enemy->pos_base.x = x - 0 * x_mult;
    enemy->pos_base.y = y - 470 * y_mult;
    enemy->hp = all->enemy->hp;
    enemy->enemy_number = all->enemy->enemy_id;
    enemy->speed = all->enemy->global_speed2;
    enemy->base_speed = all->enemy->global_speed2;
    enemy->sprite = rr_sprite_scale(all->enemy->texture2,
    pos, rr_2f(1.4, 1.4));
    enemy->clock = sfClock_create();
}

node_enemy *node_create_one(node_enemy *node, all_ruru *all, sfVector2f pos)
{
    node_enemy *new_node;
    new_node = malloc(sizeof(node_enemy));
    setting_mob(new_node, all, pos);
    new_node->next = NULL;
    if (node_empty(node))
        return new_node;
    node_enemy *temp;
    temp = node;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = new_node;
    return node;
}

node_enemy *node_create(node_enemy *node, int x, all_ruru *all, sfVector2f pos)
{
    while (x){
        node = node_create_one(node, all, pos);
        all->enemy->enemy_id += 1;
        x -= 1;
    }
    return node;
}
