/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** ressource_player
*/

#include "my_rpg.h"

static void ressource_player_ptr(player_ruru *player, all_ruru *all)
{
    add_ptr_to_all_malloc(player->clock_input, CLOCK, MALLOC);
    add_ptr_to_all_malloc(player->sprite, SPRITE, MALLOC);
    add_ptr_to_all_malloc(player->texture, TEXTURE, MALLOC);
    add_ptr_to_all_malloc(player->clock_mouvement, CLOCK, MALLOC);
    add_ptr_to_all_malloc(player->clock_direction_anim, CLOCK, MALLOC);
}

static void ressource_player_rect(player_ruru *player, all_ruru *all)
{
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 3; j++) {
            player->rect[i][j].left = j * 32;
            player->rect[i][j].top = i * 32;
            player->rect[i][j].width = 32;
            player->rect[i][j].height = 32;
        }
    }
}

player_ruru *ressource_player(all_ruru *all)
{
    player_ruru *player = malloc(sizeof(player_ruru));
    player->texture = rr_texture("michel/image/player.png", sfTrue);
    player->direction = 0;
    ressource_player_rect(player, all);
    player->actual_rect = 1;
    player->is_back = 0;
    player->is_walking = sfFalse;
    player->anim_clock = NULL;
    player->clock_invincible = NULL;
    player->sprite = rr_sprite_scalerect(player->texture, rr_2f(400, 200)
    , rr_2f(2.5, 2.5), player->rect[0][1]);
    player->direction_tmp = 0;
    player->direction_anim_active = sfFalse;
    player->clock_input = sfClock_create();
    player->clock_mouvement = sfClock_create();
    player->clock_direction_anim = NULL;
    ressource_class(all, player);
    ressource_player_ptr(player, all);
    return player;
}
