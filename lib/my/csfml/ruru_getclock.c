/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** ruru_getclock
*/

#include "my_rpg.h"

float rr_getclock(sfClock *clock)
{
    sfTime time = sfClock_getElapsedTime(clock);
    float seconds = time.microseconds / 1000000.0;
    return seconds;
}
