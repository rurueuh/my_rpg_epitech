/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-lucas.mariette
** File description:
** csfml_player
*/

#ifndef CSFML_PLAYER_H_
    #define CSFML_PLAYER_H_

    typedef struct hp_t {
        int hp;
        int max_hp;
        sfClock *regen_hp;
        sfRectangleShape *hp_bar;
        sfRectangleShape *hp_bar_bg;
        sfText *hp_text;
    } hp_t;

    typedef struct mp_t {
        int mp;
        int max_mp;
        sfClock *regen_mp;
        sfRectangleShape *mp_bar;
        sfRectangleShape *mp_bar_bg;
        sfText *mp_text;
    } mp_t;

    typedef struct stats_t {
        int lvl;
        int exp;
        int max_exp;
        sfText *level_text;
        sfText *lvl_text;
        mp_t mp;
        hp_t hp;
        int attack;
        int defense;
        int speed;
    } stats_t;

    typedef struct class_t {
        void *attack_func;
        void *spell_w;
        void *spell_x;
        stats_t stats;
    } class_t;

    typedef struct {
        sfIntRect rect[8][3];
        sfBool is_walking;
        sfClock *anim_clock;
        int rect_col;
        sfTexture *texture;
        sfSprite *sprite;
        sfClock *clock_input;
        sfClock *clock_mouvement;
        sfClock *clock_direction_anim;
        sfClock *clock_invincible;
        sfBool direction_anim_active;
        int actual_rect;
        int is_back;
        float direction;
        float direction_tmp;
        class_t class;
    } player_ruru;

    #define CLOCK_ANIM all->player->clock_direction_anim
    #define REGEN_TIME_MANA 0.3
    #define STATS all->player->class.stats

    void anim_move_player(all_ruru *all);
    void draw_mana_hp(all_ruru *all);
    void mana_hp_gestion(all_ruru *all);

#endif
