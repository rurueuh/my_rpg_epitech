/*
** EPITECH PROJECT, 2021
** strdup
** File description:
** change mem of pointer
*/

#include <unistd.h>
#include <stdlib.h>

char *my_strcat(char *dest, char const *src);

int my_putstr(char const * str);

int my_show_word_array(char * const *tab)
{
    int     i = 0;
    int     len = 0;
    char    *dest;

    while (tab[len] != NULL) {
        len++;
    }
    while (i < len) {
        dest = malloc(sizeof(char) * len);
        dest = my_strcat(dest, tab[i]);
        dest = my_strcat(dest, "\n");
        i++;
        my_putstr(dest);
    }
}
