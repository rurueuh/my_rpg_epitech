/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** printf like stdio
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "my_rpg.h"

char *convertor_int_to_hexa(int nb, int maj)
{
    int res = 0;
    if (nb > 16){
        res = nb % 16;
        nb = nb / 16;
        convertor_int_to_hexa(nb, maj);
    } else {
        res = nb;
    }
    if (res > 9){
        my_putchar(res + maj - 10);
    } else {
        my_putchar(res + 48);
    }
}

int printf_char(char *str, int i, va_list args)
{
    if (str[i] != '%'){
        my_putchar(str[i]);
        return i;
    }
    if (str[i] == '%' && str[i + 1] == 'c'){
        char letter = va_arg(args, int);
        my_putchar(letter);
        i++;
    }
    if (str[i] == '%' && str[i + 1] == 's'){
        char *str = va_arg(args, char *);
        my_putstr(str);
        i++;
    }
    return i;
}

int printf_int(char *str, int i, va_list args)
{
    if (str[i] == '%' && (str[i + 1] == 'd' || str[i + 1] == 'i') ){
        int nbr = va_arg(args, int);
        my_put_nbr(nbr);
        i++;
    }
    if (str[i] == '%' && str[i + 1] == 'u'){
        unsigned int nbr = (unsigned int) va_arg(args, int);
        my_put_nbr(nbr);
        i++;
    }
    if (str[i] == '%' && str[i + 1] == 'b'){
        unsigned int nbr = va_arg(args, unsigned int);
        int_to_binary(nbr);
        i++;
    }
    return i;
}

int printf_special(char *str, int i, va_list args)
{
    if (str[i] == '%' && str[i + 1] == 'p'){
        unsigned int nbr = va_arg(args, unsigned int);
        my_putstr("0x");
        convertor_int_to_hexa(nbr, 97);
        i++;
    }
    if (str[i] == '%' && str[i + 1] == 'x'){
        unsigned int nbr = va_arg(args, unsigned int);
        convertor_int_to_hexa(nbr, 97);
        i++;
    }
    if (str[i] == '%' && str[i + 1] == 'X'){
        unsigned int nbr = va_arg(args, unsigned int);
        convertor_int_to_hexa(nbr, 65);
        i++;
    }
    return i;
}

int my_printf(char *str, ...)
{
    va_list args;
    va_start(args, str);
    for (int i = 0; str[i] != '\0'; i++){
        i = printf_char(str, i, args);
        i = printf_int(str, i, args);
        i = printf_special(str, i, args);
    }
    return 0;
}
