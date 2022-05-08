/*
** EPITECH PROJECT, 2022
** new_lib_csfml
** File description:
** ressource_all
*/

#include "my_rpg.h"
#include "csfml_window.h"

static void strange_render_texture(window_ruru *window, all_ruru *all)
{
    window->render_texture = sfRenderTexture_create(window->x * 3
    , window->y * 3, sfTrue);
    window->sprite_texture = sfSprite_create();
    add_ptr_to_all_malloc(window->sprite_texture, SPRITE, MALLOC);
}

window_ruru *ressource_window(all_ruru *all)
{
    window_ruru *window = malloc(sizeof(window_ruru));
    window->bitperpixel = 32;
    window->fps = 144;
    window->fullscreen = sfTrue;
    window->name = "uwu";
    window->x = 1920;
    window->y = 1080;
    rr_window(window);
    strange_render_texture(window, all);
    sfRenderWindow_setVerticalSyncEnabled(window->window
    , all->start->window->vsync);
    sfRenderWindow_setKeyRepeatEnabled(window->window, sfTrue);
    return window;
}
