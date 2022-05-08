/*
** EPITECH PROJECT, 2022
** test
** File description:
** node_empty
*/

#include "my_rpg.h"

int node_empty(node_enemy *node)
{
    if (node)
        return 0;
    else
        return 1;
}
