/*
** EPITECH PROJECT, 2022
** new_lib_csfml
** File description:
** ressource_all
*/

#include "my_rpg.h"

enemy_t *ressource_enemy(all_ruru *all)
{
    enemy_t *enemy = malloc(sizeof(enemy_t));
    enemy->global_speed1 = 3;
    enemy->global_speed2 = 7;
    enemy->hp = 10;
    enemy->enemypath = sfClock_create();
    enemy->enemy_id = 0;
    enemy->texture1 = rr_texture("michel/image/enemy.png", sfTrue);
    enemy->texture2 = rr_texture("michel/image/zombie2.png", sfTrue);
    enemy->rect = rr_intrect(22, 19, 43, 58);
    enemy->enemy_t = NULL;
    return enemy;
}
