/*
** EPITECH PROJECT, 2021
** revstr
** File description:
** reverse a str
*/

#include <unistd.h>

int my_str_isnum(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            i++;
        } else
            return 0;
    }
    return 1;
}
