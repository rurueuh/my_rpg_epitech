/*
** EPITECH PROJECT, 2022
** pause_include
** File description:
** pause_struct
*/

#ifndef CSFML_PAUSE_H_
    #define CSFML_PAUSE_H_

    typedef struct pause_t {
        sfTexture *qui_n;
        sfTexture *qui_y;
        sfTexture *men_n;
        sfTexture *men_y;
        sfTexture *res_n;
        sfTexture *res_y;
        sfMusic *bruit;
        sfSprite *quit;
        sfSprite *menu;
        sfSprite *resume;
        sfVector2f qui_co;
        sfVector2f men_co;
        sfVector2f res_co;
    } pause_t;

    typedef struct all_ruru all_ruru;
    typedef struct all_ruru all_t;

    sfBool pause_menu(all_t *all);
    void draw_pause(all_t *all);
    pause_t *pause_ressource(all_t *all);
    void event_change_menu(all_t *all);
    int event_click_menu(all_t *all);

#endif
