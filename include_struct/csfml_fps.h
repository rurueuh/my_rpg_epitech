/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** csfml_fps
*/

#ifndef CSFML_FPS_H_
    #define CSFML_FPS_H_
    typedef struct {
        sfClock *clock;
        sfText *text;
        sfFont *font;
        sfTime time;
        float seconds;
        int frame_per_seconds;
    } fps_ruru;

#endif
