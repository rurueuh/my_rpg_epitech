/*
** EPITECH PROJECT, 2021
** revstr
** File description:
** reverse a str
*/

#include <unistd.h>

int len(char *to_find)
{
    int i = 0;

    while (to_find[i] != '\0')
        i++;
    return (i);
}

char *my_strstr(char *str, char *to_find)
{
    int i = 0;
    int size = len(to_find);

    while (str[i] != to_find[i] && str[i] != '\0') {
        str++;
    }
    if (str[i] != '\0') {
        while (str[i] == to_find[i] && to_find[i] != '\0' && str[i] != '\0')
            i++;
        if (i == size)
            return (str);
        else if (str[i] != '\0')
            return (my_strstr(str + 1, to_find));
    } else
        return NULL;
}
