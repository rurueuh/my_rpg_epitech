/*
** EPITECH PROJECT, 2022
** my_defender_restructure
** File description:
** event_spell
*/

#include "my_rpg.h"

static void event_spell_w(all_ruru *all)
{
    void (*ptr_func)(all_ruru *all) = all->player->class.spell_w;
    if (ptr_func)
        ptr_func(all);
}

static void event_spell_x(all_ruru *all)
{
    void (*ptr_func)(all_ruru *all) = all->player->class.spell_x;
    if (ptr_func)
        ptr_func(all);
}

static void event_attack_left(all_ruru *all)
{
    void (*ptr_func)(all_ruru *all) = all->player->class.attack_func;
    if (ptr_func)
        ptr_func(all);
}

void event_spell(all_ruru *all)
{
    if (sfKeyboard_isKeyPressed(sfKeyW))
        event_spell_w(all);
    if (sfKeyboard_isKeyPressed(sfKeyX))
        event_spell_x(all);
    if (sfMouse_isButtonPressed(sfMouseLeft))
        event_attack_left(all);
}
