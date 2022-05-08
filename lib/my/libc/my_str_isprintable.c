/*
** EPITECH PROJECT, 2021
** revstr
** File description:
** reverse a str
*/

#include <unistd.h>

int my_str_isprintable  (char const * str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 32 && str[i] <= 126) {
            i++;
        } else
            return (0);
    }
    return (1);
}
