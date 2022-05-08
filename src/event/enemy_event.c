/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** enemy_event
*/

#include "my_rpg.h"

void event_enemy(all_ruru *all)
{
    sfFloatRect player = sfSprite_getGlobalBounds(all->player->sprite);
    sfFloatRect zone = {2041, 600, 2200, 800};
    if (sfKeyboard_isKeyPressed(sfKeySpace)
    && node_len(all->enemy->enemy_t) == 0
    || rr_collide(player, zone) && node_len(all->enemy->enemy_t) == 0) {
        create_enemy(all, 1, (sfVector2f) {2600, 400});
        create_enemy(all, 1, (sfVector2f) {2800, 400});
        create_enemy(all, 1, (sfVector2f) {2900, 1000});
        create_enemy(all, 1, (sfVector2f) {2900, 700});
        create_enemy(all, 1, (sfVector2f) {2600, 500});
    }
}
