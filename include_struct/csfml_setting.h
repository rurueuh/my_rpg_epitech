/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** csfml_setting
*/

#ifndef CSFML_SETTING_H_
    #define CSFML_SETTING_H_

static const char *__filename[] = {
    "michel/sound/spells/electric_spell.wav",
    "michel/sound/spells/fire_explode.wav",
    "michel/sound/spells/slow_spell.wav",
    "michel/police/arial.ttf",
    "michel/musique/menu_ost.ogg",
    "michel/info/map1",
    "michel/image/zombie2.png",
    "michel/image/wall.png",
    "michel/image/wall_i.png",
    "michel/image/wall_hashtag.png",
    "michel/image/wall_h.png",
    "michel/image/wall_g.png",
    "michel/image/wall_f.png",
    "michel/image/wall_e.png",
    "michel/image/wall_d.png",
    "michel/image/wall_c.png",
    "michel/image/wall_b.png",
    "michel/image/wall_a.png",
    "michel/image/transparent.png",
    "michel/image/slow.png",
    "michel/image/settings_start.png",
    "michel/image/red.png",
    "michel/image/player.png",
    "michel/image/panel.png",
    "michel/image/npc.png",
    "michel/image/map1.png",
    "michel/image/main_page_start.png",
    "michel/image/floor_i.png",
    "michel/image/floor_h.png",
    "michel/image/floor_g.png",
    "michel/image/floor_f.png",
    "michel/image/floor_e.png",
    "michel/image/floor_d.png",
    "michel/image/floor_c.png",
    "michel/image/floor_b.png",
    "michel/image/floor_a.png",
    "michel/image/f_anim.png",
    "michel/image/explo.png",
    "michel/image/enemy.png",
    "michel/image/arrow.png",
    "michel/image/bulle.png",
    "michel/image/blue.png",
    "michel/image/blah.png",
    "michel/image/arrow.png",
    "michel/image/start/continue_k.png",
    "michel/image/start/continue_t.png",
    "michel/image/start/continue.png",
    "michel/image/start/exit_k.png",
    "michel/image/start/exit_t.png",
    "michel/image/start/exit.png",
    "michel/image/start/off_k.png",
    "michel/image/start/off_t.png",
    "michel/image/start/off.png",
    "michel/image/start/on_k.png",
    "michel/image/start/on_t.png",
    "michel/image/start/on.png",
    "michel/image/start/setting_k.png",
    "michel/image/start/setting_t.png",
    "michel/image/start/setting.png",
    "michel/image/start/thread.png",
    "michel/image/start/vsync.png",
    "michel/image/pause/con_n.png",
    "michel/image/pause/con_y.png",
    "michel/image/pause/exi_n.png",
    "michel/image/pause/exi_y.png",
    "michel/image/pause/men_n.png",
    "michel/image/pause/men_y.png",
};

    #define OFF_N start->settings->off_n
    #define OFF_Y start->settings->off_y
    #define ON_N start->settings->on_n
    #define ON_Y start->settings->on_y
    #define THR_Y start->settings->thr_y
    #define THR_N start->settings->thr_n
    #define VSY_Y start->settings->vsy_y
    #define VSY_N start->settings->vsy_n
    #define QUIT start->settings->quit
    #define QUI_Y start->settings->qui_y
    #define QUI_N start->settings->qui_n
    #define OFF_K start->settings->off_k
    #define ON_K start->settings->on_k
    #define THR_T button->thr_t
    #define VSY_T button->vsy_t

    typedef struct start_setting {
        window_ruru *window;
        int resolution_x;
        int resolution_y;
        int fps;
        int ray_number;
    } start_setting;

#endif
