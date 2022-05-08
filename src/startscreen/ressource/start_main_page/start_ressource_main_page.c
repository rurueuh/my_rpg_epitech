/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** start_ressource_main_page
*/

#include "my_rpg.h"

start_button *start_ressource_button(startscreen_t *start)
{
    start_button *button = malloc(sizeof(start_button));
    button->res_n = rr_texture("michel/image/start/continue.png", sfTrue);
    button->res_y = rr_texture("michel/image/start/continue_t.png", sfTrue);
    button->res_k = rr_texture("michel/image/start/continue_k.png", sfTrue);
    button->set_n = rr_texture("michel/image/start/settings.png", sfTrue);
    button->set_y = rr_texture("michel/image/start/settings_t.png", sfTrue);
    button->set_k = rr_texture("michel/image/start/settings_k.png", sfTrue);
    button->qui_n = rr_texture("michel/image/start/exit.png", sfTrue);
    button->qui_y = rr_texture("michel/image/start/exit_t.png", sfTrue);
    button->qui_k = rr_texture("michel/image/start/exit_k.png", sfTrue);
    button->nr = 0;
    button->nq = 0;
    button->ns = 0;
    button->res = rr_sprite_scale(button->res_n, rr_2f(1250 , 132)
    , rr_2f(1.2, 1.2));
    button->qui = rr_sprite_scale(button->qui_n, rr_2f(1250 , 640)
    , rr_2f(1.2, 1.2));
    button->set = rr_sprite_scale(button->set_n, rr_2f(1250 , 364)
    , rr_2f(1.2, 1.2));
    return button;
}

start_main_page *start_ressource_main_page(startscreen_t *start)
{
    start_main_page *main = malloc(sizeof(start_main_page));

    main->active = sfFalse;
    main->texture_back = rr_texture("michel/image/main_page_start.png"
    , sfTrue);
    main->background = rr_sprite(main->texture_back, rr_2f(0, 0));
    main->music = sfMusic_createFromFile("michel/musique/menu_ost.ogg");
    main->stat = sfTrue;
    sfMusic_setLoop(main->music, sfTrue);
    return main;
}

void settings_color_text(start_settings *button)
{
    button->vsy_t = rr_texture("michel/image/start/vsync.png", sfTrue);
    button->thr_t = rr_texture("michel/image/start/thread.png", sfTrue);
    button->vsy = rr_sprite_scale(VSY_T, rr_2f(900, 450), rr_2f(1, 1));
    button->thr = rr_sprite_scale(THR_T, rr_2f(900, 280), rr_2f(1, 1));
    sfSprite_setColor(button->vsy, sfRed);
    sfSprite_setColor(button->thr, sfGreen);
    button->active = sfTrue;
}

start_settings *settings_ressource(startscreen_t *start)
{
    start_settings *button = malloc(sizeof(start_settings));

    button->back = rr_texture("michel/image/main_page_start.png", sfTrue);
    button->ground = rr_sprite(button->back, rr_2f(0, 0));
    button->on_n = rr_texture("michel/image/start/on.png", sfTrue);
    button->on_y = rr_texture("michel/image/start/on_t.png", sfTrue);
    button->on_k = rr_texture("michel/image/start/on_k.png", sfTrue);
    button->off_n = rr_texture("michel/image/start/off.png", sfTrue);
    button->off_y = rr_texture("michel/image/start/off_t.png", sfTrue);
    button->off_k = rr_texture("michel/image/start/off_k.png", sfTrue);
    button->qui_n = rr_texture("michel/image/start/exit.png", sfTrue);
    button->qui_y = rr_texture("michel/image/start/exit_t.png", sfTrue);
    button->quit = rr_sprite_scale(button->qui_n, BUTTON_QUIT);
    button->thr_n = rr_sprite_scale(button->off_n, BUTTON_THRN);
    button->vsy_n = rr_sprite_scale(button->off_n, BUTTON_FULN);
    button->thr_y = rr_sprite_scale(button->on_n, BUTTON_THRY);
    button->vsy_y = rr_sprite_scale(button->on_n, BUTTON_FULY);
    settings_color_text(button);
    return button;
}
