/*
** EPITECH PROJECT, 2021
** my_atoi
** File description:
** change int to str
*/

#include <unistd.h>

int my_strlen (char const *str);

int my_atoi(char *str)
{
    if (str[0] == 0){
        return 84;
    }
    int len = my_strlen(str);
    int i = 0;
    int result = 0;
    int nega = 1;
    if (str[0] == '-'){
        i++;
        nega = -1;
    }
    for (i; i < len ; i++){
        result = result + (str[i] - '0');
        result *= 10;
    }
    return (result / 10 * nega);
}
