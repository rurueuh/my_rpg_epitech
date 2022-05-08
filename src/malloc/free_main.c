/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** free_main
*/

#include "my_rpg.h"

static void free_type(void *ptr, int type)
{
    if (type == TEXTURE)
        sfTexture_destroy((sfTexture *) ptr);
    if (type == SPRITE)
        sfSprite_destroy((sfSprite *) ptr);
    if (type == FONT)
        sfFont_destroy((sfFont *) ptr);
    if (type == TEXT)
        sfText_destroy((sfText *) ptr);
    if (type == CLOCK)
        sfClock_destroy((sfClock *) ptr);
    if (type == NORMAL)
        free(ptr);
    if (type == RECTSHAPE)
        sfRectangleShape_destroy((sfRectangleShape *) ptr);
}

void my_free(void *ptr, malloc_t **head)
{
    malloc_t *back = NULL;
    malloc_t *tmp = *head;

    while (tmp) {
        if (tmp->__malloc == ptr)
            break;
        back = tmp;
        tmp = tmp->next;
    }
    if (!tmp) {
        return;
    }
    free_type(tmp->__malloc, tmp->type);
    if (back)
        back->next = tmp->next;
    free(tmp);
}
