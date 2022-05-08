/*
** EPITECH PROJECT, 2021
** strncpy
** File description:
** je comprends strictement rien a ce que il faut faire
*/

#include <unistd.h>

char *my_strncpy(char *dest, char const *src, int n)
{
    int i;

    for (i = 0; n != i && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    if (src[i] == '\0') {
        dest[i] = '\0';
    }
    return (dest);
}
