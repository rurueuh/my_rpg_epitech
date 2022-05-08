/*
** EPITECH PROJECT, 2022
** csfml
** File description:
** csfml_pnj
*/

#ifndef CSFML_PNJ_H_
    #define CSFML_PNJ_H_

    typedef struct {
        sfSprite *sprite[2];
        sfTexture *texture[2];
        int selector;
    } pnj_selector;

    typedef struct {
        sfTexture *texture;
        sfTexture *bubulle_texture;
        sfSprite *bubulle_sprite;
        sfSprite *sprite[3];
        sfClock *clock;
        sfBool active;
    } pnj_text;

    typedef struct {
        sfSprite *sprite;
        sfTexture *texture;
        sfBool active;
        sfClock *clock;
        pnj_text text;
        pnj_selector selector;
    } pnj_t;

    void draw_pnj_interface(all_ruru *all);
    void active_choose_pnj(all_ruru *all);
#endif
