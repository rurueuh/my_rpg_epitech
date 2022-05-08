/*
** EPITECH PROJECT, 2021
** strcpy
** File description:
** je comprends strictement rien a ce que il faut faire
*/

#include <unistd.h>

char *my_strlowcase( char * str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] > 96 - 32 && str[i] < 123 - 32)
            str[i] = str[i] + 32;
        i++;
    }
    return str;
}
