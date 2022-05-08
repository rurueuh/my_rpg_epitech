/*
** EPITECH PROJECT, 2022
** new_lib.csfml
** File description:
** ruru_texture
*/

#include "my_rpg.h"

sfTexture *rr_texture_reap(char *path, sfBool smooth)
{
    sfTexture *texture = sfTexture_createFromFile(path, NULL);
    sfTexture_setSmooth(texture, smooth);
    sfTexture_setRepeated(texture, sfTrue);
    return texture;
}
