/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** my_malloc
*/

#ifndef MY_MALLOC_H_
    #define MY_MALLOC_H_

    #define NORMAL 0
    #define TEXTURE 1
    #define SPRITE 2
    #define FONT 3
    #define TEXT 4
    #define CLOCK 5
    #define RECTSHAPE 6

    #define MALLOC &(all->malloc)

    typedef struct malloc_t {
        int type;
        void *__malloc;
        struct malloc_t *next;
    } malloc_t;

    void add_ptr_to_all_malloc(void *ptr, int type, malloc_t **head);
    void my_free(void *ptr, malloc_t **head);
    void *add_malloc(signed long __size, int type, malloc_t **head);
    void free_all_malloc(malloc_t **head);

#endif
