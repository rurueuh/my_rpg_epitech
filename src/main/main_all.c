/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** main_all
*/

#include "my_rpg.h"

int main(void)
{
    if (check_file() == 84)
        return 84;
    return (startscreen_main());
}
