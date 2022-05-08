/*
** EPITECH PROJECT, 2021
** int to binary
** File description:
** return binary in char*
*/

#include <stdlib.h>
int my_putstr(char const *str);
char *my_revstr(char *str);

void int_to_binary(unsigned int nb)
{
    char *back = malloc(32);
    for (int i = 0; nb > 0; i++) {
        back[i] = nb % 2 + 48;
        nb = nb / 2;
    }
    back = my_revstr(back);
    my_putstr(back);
    free(back);
}
