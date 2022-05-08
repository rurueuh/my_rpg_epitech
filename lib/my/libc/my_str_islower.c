/*
** EPITECH PROJECT, 2021
** revstr
** File description:
** reverse a str
*/

#include <unistd.h>

int my_str_islower(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            i++;
        } else
            return 0;
    }
    return 1;
}
