/*
** EPITECH PROJECT, 2021
** strcpy
** File description:
** je comprends strictement rien a ce que il faut faire
*/

#include <unistd.h>

char *my_strcpy(char *dest, char const *src)
{
    int i;

    for (i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return dest;
}
