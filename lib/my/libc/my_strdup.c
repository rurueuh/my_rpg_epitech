/*
** EPITECH PROJECT, 2021
** strdup
** File description:
** change mem of pointer
*/

#include <stdlib.h>

int my_strlen (char const * str);

char *my_strdup(char const *src)
{
    char *dest;
    int src_len = my_strlen(src);
    int i = 0;

    dest = malloc(sizeof(char) * (src_len + 1));
    while (i < src_len) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
