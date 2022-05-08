/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** csfml_startscreen
*/

#ifndef CSFML_STARTSCREEN_H_
    #define CSFML_STARTSCREEN_H_

    #include <SFML/Graphics.h>
    #include <SFML/Window.h>
    #include <SFML/Audio.h>
    #include <SFML/Network.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <math.h>

    #define BUTTON_QUIT rr_2f(1250 , 640), rr_2f(1.2, 1.2)
    #define BUTTON_THRN rr_2f(1280 , 425), rr_2f(0.5, 0.5)
    #define BUTTON_FULN rr_2f(1280 , 225), rr_2f(0.5, 0.5)
    #define BUTTON_THRY rr_2f(1505 , 475), rr_2f(0.5, 0.5)
    #define BUTTON_FULY rr_2f(1505 , 305), rr_2f(0.5, 0.5)

    #define BUTTON_QUI_Y rr_2f(1250, 640), rr_2f(1.2, 1.2)
    #define BUTTON_QUI_N rr_2f(1250, 640), rr_2f(1.2, 1.2)
    #define BUTTON_FUL_N rr_2f(1280 , 255), rr_2f(0.5, 0.5)
    #define BUTTON_FUL_Y rr_2f(1280 , 255), rr_2f(0.5, 0.5)
    #define BUTTON_THR_Y rr_2f(1505 , 475), rr_2f(0.5, 0.5)
    #define BUTTON_THR_N rr_2f(1280 , 425), rr_2f(0.5, 0.5)
    #define BUTTON_FUL_YE rr_2f(1505, 305), rr_2f(0.5, 0.5)

    typedef struct start_window {
        int x;
        int y;
        int bitperpixel;
        int fps;
        char *name;
        sfBool vsync;
        sfBool thread;
        sfRenderWindow *window;
        sfEvent evt;
        sfVideoMode videomode;
        sfContextSettings context;
    } start_window;

    typedef struct start_button {
        sfSprite *res;
        sfTexture *res_n;
        sfTexture *res_y;
        sfTexture *res_k;
        sfSprite *qui;
        sfTexture *qui_n;
        sfTexture *qui_y;
        sfTexture *qui_k;
        sfSprite *set;
        sfTexture *set_n;
        sfTexture *set_y;
        sfTexture *set_k;
        int nr;
        int nq;
        int ns;
    } start_button;

    typedef struct start_animation {
        sfBool active;
        sfClock *clock;
        sfTexture *texture;
        sfSprite *sprite;
        sfIntRect rect[66];
    } start_animation;

    typedef struct start_main_page {
        sfBool active;
        sfTexture *texture_back;
        sfSprite *background;
        sfMusic *music;
        sfBool stat;
    } start_main_page;

    typedef struct start_settings {
        sfTexture *back;
        sfSprite *ground;
        sfTexture *off_n;
        sfTexture *off_y;
        sfTexture *off_k;
        sfTexture *on_n;
        sfTexture *on_y;
        sfTexture *on_k;
        sfTexture *qui_n;
        sfTexture *qui_y;
        sfTexture *qui_k;
        sfSprite *vsy_y;
        sfSprite *vsy_n;
        sfSprite *thr_y;
        sfSprite *thr_n;
        sfTexture *thr_t;
        sfTexture *vsy_t;
        sfSprite *thr;
        sfSprite *vsy;
        sfSprite *quit;
        sfBool active;
    } start_settings;

    typedef struct startscreen_t {
        start_window *window;
        start_main_page *main;
        start_animation *anim;
        start_button *button;
        start_settings *settings;
    } startscreen_t;

    int startscreen_main(void);

    startscreen_t *start_ressource_all(void);
    start_window *startscreen_ressource_window(startscreen_t *start);
    start_animation *start_ressource_anim(startscreen_t *start);
    start_main_page *start_ressource_main_page(startscreen_t *start);
    start_button *start_ressource_button(startscreen_t *start);

    void start_draw_all(startscreen_t *start);
    void start_draw_menu(startscreen_t *start);

    void start_anim_main(startscreen_t *start);
    void start_finish_anim_start(startscreen_t *start);

    int start_event_main(startscreen_t *start);

    start_settings *settings_ressource(startscreen_t *start);
    void settings(startscreen_t *start);
#endif
