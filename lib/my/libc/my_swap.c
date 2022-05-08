/*
** EPITECH PROJECT, 2021
** my swap
** File description:
** switch adr
*/

#include <unistd.h>

void my_swap (int *a, int *b)
{
    int     temp = *b;

    *b = *a;
    *a = temp;
}
