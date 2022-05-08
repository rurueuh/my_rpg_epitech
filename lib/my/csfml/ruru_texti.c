/*
** EPITECH PROJECT, 2021
** create cursor
** File description:
** remove window cursor, need window, path
*/

#include "my_rpg.h"

sfText* rr_texti(sfVector2f pos, int nb, sfFont* font, int size)
{
    sfText* text = sfText_create();
    sfVector2f end_vector = {pos.x, pos.y};
    sfText_setFont(text, font);
    sfText_setColor(text, sfWhite);
    sfText_setCharacterSize(text, 30);
    char *str = my_int_to_str(nb);
    sfText_setString(text, str);
    free(str);
    sfText_setPosition(text, end_vector);
    return text;
}
