/*
** EPITECH PROJECT, 2022
** tgrr_touch_sprite.c
** File description:
** tgrr_touch_sprite.c
*/

#include "my_rpg.h"

sfBool tg_touch_sprite(sfSprite *sprite, all_ruru *all)
{
    sfFloatRect sprite_rect = sfSprite_getGlobalBounds(sprite);
    sfVector2f mouse = get_mouse_position(all);

    if (mouse.x >= sprite_rect.left
    && mouse.x < sprite_rect.left + sprite_rect.width
    && mouse.y >= sprite_rect.top
    && mouse.y < sprite_rect.top + sprite_rect.height ){
        return sfTrue;
    } else {
        return sfFalse;
    }
}
