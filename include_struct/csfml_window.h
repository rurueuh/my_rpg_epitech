/*
** EPITECH PROJECT, 2022
** new_lib.csfml
** File description:
** csfml_window
*/

#ifndef CSFML_WINDOW_H_
    #define CSFML_WINDOW_H_
    typedef struct window_ruru {
        int x;
        int y;
        int bitperpixel;
        int fps;
        char *name;
        sfBool fullscreen;
        sfRenderWindow *window;
        sfEvent evt;
        sfVideoMode videomode;
        sfContextSettings context;
        sfRenderTexture *render_texture;
        sfSprite *sprite_texture;
    } window_ruru;
#endif
