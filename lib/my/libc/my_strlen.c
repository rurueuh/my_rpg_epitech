/*
** EPITECH PROJECT, 2021
** my str len
** File description:
** calc str len
*/

#include <unistd.h>

int my_strlen (char const * str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
