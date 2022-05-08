/*
** EPITECH PROJECT, 2021
** revstr
** File description:
** reverse a str
*/

#include <unistd.h>

char *my_revstr(char *str)
{
    char    temp;
    int     i = 0;
    int     len = 0;

    for (i = 0; str[len] != '\0'; len++) {
    }
    len--;
    while (i < len) {
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        i++;
        len--;
    }
    return (str);
}
