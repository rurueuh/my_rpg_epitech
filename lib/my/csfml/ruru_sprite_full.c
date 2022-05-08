/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** ruru_sprite_full
*/

#include "my_rpg.h"

void rr_scale_fullscreen(sfRenderWindow* window, sfSprite* sprite)
{
    sfFloatRect size_sprite = sfSprite_getLocalBounds(sprite);
    sfVector2u size_window = sfRenderWindow_getSize(window);
    float x_scale = (float) size_window.x / size_sprite.width;
    float y_scale = (float) size_window.y / size_sprite.height;
    sfVector2f scale = {x_scale, y_scale};
    sfSprite_setScale(sprite, scale);
}
