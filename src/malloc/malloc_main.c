/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** malloc_main
*/

#include "my_rpg.h"

static void *my_malloc(size_t __size)
{
    void *ptr = malloc(__size);

    if (ptr == NULL)
        return NULL;
    while (__size--)
        ((char *) ptr)[__size] = '\0';
    return ptr;
}

void free_all_malloc(malloc_t **head)
{
    malloc_t *back = NULL;
    malloc_t *tmp = *(head);

    if (!tmp)
        return;
    while (tmp) {
        if (back)
            my_free(back->__malloc, &back);
        back = tmp;
        tmp = tmp->next;
    }
    my_free (back->__malloc, &back);
}

void *add_malloc(signed long __size, int type, malloc_t **head)
{
    malloc_t *new = my_malloc(sizeof(malloc_t));
    malloc_t *tmp = *head;

    if (new == NULL || __size < 0)
        return NULL;
    new->type = type;
    new->__malloc = my_malloc(__size);
    if (new->__malloc == NULL)
        return NULL;
    new->next = NULL;
    if (*(head) == NULL){
        *(head) = new;
        return new->__malloc;
    } else {
        while (tmp->next != NULL)
            tmp = tmp->next;
        tmp->next = new;
    }
    return (new->__malloc);
}

void add_ptr_to_all_malloc(void *ptr, int type, malloc_t **head)
{
    malloc_t *new = my_malloc(sizeof(malloc_t));
    malloc_t *tmp = *head;

    if (new == NULL || ptr == NULL)
        return;
    new->__malloc = ptr;
    new->type = type;
    new->next = NULL;
    if (*(head) == NULL){
        *(head) = new;
        return;
    } else {
        while (tmp->next != NULL)
            tmp = tmp->next;
        tmp->next = new;
    }
    return;
}
