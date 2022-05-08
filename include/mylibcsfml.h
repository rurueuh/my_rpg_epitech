/*
** EPITECH PROJECT, 2021
** my header
** File description:
** my
*/

#include "./my_rpg.h"
#include "../include_struct/csfml_window.h"

#ifndef header_graph
    #define header_graph

    typedef struct all_ruru all_ruru;

    void rr_window(window_ruru *window);
    void rr_window_sprite(sfSprite *sprite, sfRenderWindow *window);
    void rr_window_circle(sfCircleShape *circle, sfRenderWindow *window);
    void rr_window_text(sfText *text, sfRenderWindow *window);
    void rr_window_rectsh(sfRectangleShape *rect, sfRenderWindow *window);

    sfSprite *rr_sprite(sfTexture *texture, sfVector2f pos);
    sfSprite *rr_sprite_opa(sfTexture *textur, sfVector2f pos, short opacity);

    float rr_getclock(sfClock *clock);

    sfSprite *rr_sprite_scale(sfTexture *texture,
    sfVector2f pos, sfVector2f scale);
    sfSprite *rr_sprite_scalerect(sfTexture *texture,
    sfVector2f pos, sfVector2f scale, sfIntRect rect);

    sfSprite *rr_sprite_rect(sfTexture *texture, sfVector2f pos,
    sfIntRect rect);
    sfSprite *rr_sprite_oparect(sfTexture *texture, sfVector2f pos,
    short opacity, sfIntRect rect);

    sfBool rr_touch_sprite(sfSprite *sprite, sfRenderWindow *window);
    sfBool tg_touch_sprite(sfSprite *sprite, all_ruru *all);
    sfBool rr_touch_rectshape(sfRectangleShape *rect, sfRenderWindow *window);

    void rr_rectsh_size(sfRectangleShape *rect, sfVector2f size);
    sfRectangleShape *rr_rectsh(sfVector2f pos, sfVector2f size);
    sfRectangleShape *rr_rectsh_fill(sfVector2f pos, sfVector2f size,
    sfColor fill);
    sfRectangleShape *rr_rectsh_outl(sfVector2f pos, sfVector2f size,
    sfColor outlin, float radius);
    sfRectangleShape *rr_rectsh_outlfill(sfVector2f pos, sfVector2f size,
    sfColor fill, sfColor outl);

    void rr_scale_fullscreen(sfRenderWindow* window, sfSprite* sprite);

    sfCircleShape *rr_circle(sfVector2f pos, float radius);
    sfCircleShape *rr_circle_fill(sfVector2f pos, float radius, sfColor fill);
    sfCircleShape *rr_circle_outl(sfVector2f pos, float radius,
    sfColor outline, float radius_outline);
    sfCircleShape *rr_circle_fillout(sfVector2f pos, float radius,
    sfColor fill, sfColor outline);

    sfTexture *rr_texture(char *path, sfBool smooth);

    sfText* rr_text(sfVector2f pos, char *str, sfFont* font, int size);
    sfText* rr_texti(sfVector2f pos, int nb, sfFont* font, int size);
    void rr_texti_update(int nb, sfText* text);
    void rr_text_update(char *str, sfText* text);

    sfIntRect rr_intrect(int left, int top, int width, int height);
    sfBool rr_collide(sfFloatRect rect1, sfFloatRect rect2);

    sfVector2f rr_2f(float x, float y);
    sfVector2f rr_2f_2u(sfVector2u vector2u);
    sfVector2f rr_2f_2i(sfVector2i vector2i);
    sfVector2i rr_2i(float x, float y);
    sfVector2i rr_2i_2u(sfVector2u vector2u);
    sfVector2i rr_2i_2f(sfVector2f vector2i);
    sfVector2u rr_2u(float x, float y);
    sfVector2u rr_2u_2f(sfVector2f vector2u);
    sfVector2u rr_2u_2i(sfVector2i vector2i);
#endif
