/*
** EPITECH PROJECT, 2021
** revstr
** File description:
** reverse a str
*/

#include <unistd.h>

int my_str_isalpha(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') {
            i++;
        } else
            return 0;
    }
    return 1;
}
