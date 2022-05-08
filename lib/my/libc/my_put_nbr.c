/*
** EPITECH PROJECT, 2021
** my put nbr
** File description:
** print nbr
*/

#include <unistd.h>

void my_putchar(char c);

int my_put_nbr(int nb)
{
    int     nega;

    if (nb < 0) {
        nega = 1;
        nb *= -1;
        my_putchar(45);
    }
    if (nb > 9) {
        my_put_nbr(nb * 0.1);
        my_put_nbr(nb % 10);
    } else if (nb >= 0) {
        long nb_under_9 = nb + 48;
        my_putchar(nb_under_9);
    }
}
