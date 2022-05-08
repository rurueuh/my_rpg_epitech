/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** check_file
*/

#include "my_rpg.h"

int check_file(void)
{
    int open_i = 0;
    int fd = open(__filename[open_i], O_RDONLY);
    int nb_file = 32 - 1;
    while (open_i < nb_file) {
        open_i++;
        fd = open(__filename[open_i], O_RDONLY);
        if (fd == -1) {
            my_printf("file missing: %s\n", __filename[open_i]);
            return (84);
        }
        close(fd);
    }
    return 0;
}
