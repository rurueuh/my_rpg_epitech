/*
** EPITECH PROJECT, 2021
** int to str
** File description:
** change a int to str
*/

#include <stdlib.h>
#include <unistd.h>

char *my_revstr(char *str);

char *my_int_to_str(int a)
{
    char *str = malloc(sizeof(char *));
    int i = 0;
    while (a != 0) {
        int k = a % 10;
        if (k > 9){
            str[i++] = k - 10 + 'a';
        } else {
            str[i++] = k + '0';
        }
        a /= 10;
    }
    str[i] = '\0';
    my_revstr(str);
    return (str);
}
