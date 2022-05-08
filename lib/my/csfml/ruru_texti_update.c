/*
** EPITECH PROJECT, 2021
** create cursor
** File description:
** remove window cursor, need window, path
*/

#include "my_rpg.h"
#include <string.h>

void rr_texti_update(int nb, sfText* text)
{
    char *str = my_int_to_str(nb);
    sfText_setString(text, str);
    free(str);
}
