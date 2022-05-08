/*
** EPITECH PROJECT, 2022
** my_defender_restructure
** File description:
** csfml_spell
*/

#ifndef CSFML_SPELL_H_
    #define CSFML_SPELL_H_

    typedef struct sword_t {
        sfBool active;
        int level;
        int mana;
        int damage;
        sfClock *couldown;
        sfSprite *sprite;
        sfTexture *texture;
        sfCircleShape *circle_radius;
    } sword_t;

    typedef struct arrow_t {
        sfBool active;
        int level;
        int mana;
        int damage;
        sfClock *couldown;
        sfSprite *sprite;
        sfTexture *texture;
        sfCircleShape *circle_radius;
        int speed;
        int enemy_id_focus;
    } arrow_t;

    typedef struct slow_t {
        sfSound* slow_sound;
        sfSoundBuffer* slow_buffer;
        sfVector2i position;
        sfBool active;
        int level;
        int mana;
        sfSprite *sprite;
        sfClock *couldown;
        sfClock *anim;
        sfTexture *texture;
        sfIntRect rect[29];
    } slow_t;

    typedef struct electrical_t {
        sfSound* electric_sound;
        sfSoundBuffer* electric_buffer;
        sfVector2i position;
        sfBool active;
        int level;
        int damage;
        int mana;
        sfSprite *sprite;
        sfClock *couldown;
        sfTexture *texture;
        sfIntRect rect[5];
    } electrical_t;

    typedef struct explosition_t {
        sfSound* explode_sound;
        sfSoundBuffer* explode_buffer;
        sfVector2i position;
        sfBool active;
        int level;
        int mana;
        int damage;
        sfSprite *sprite;
        sfClock *couldown;
        sfTexture *texture;
        sfIntRect rect[8];
    } explosition_t;

    typedef struct spell_t {
        sfTexture *texture_icon;
        sfTexture *texture_panel;
        sfSprite *sprite_panel;
        sfIntRect rect_electrical;
        sfSprite *sprite_electrical;
        sfIntRect rect_slow;
        sfSprite *sprite_slow;
        sfIntRect rect_explo;
        sfSprite *sprite_explo;
        electrical_t *electric_t;
        explosition_t *explo_t;
        arrow_t *arrow_t;
        sword_t *sword_t;
        slow_t *slow_t;
    } spell_t;

    typedef struct all_ruru all_ruru;
    sfVector2f get_pos_enemy_id(all_ruru *all, int id);

    electrical_t *ressource_eletrical(all_ruru *all);
    explosition_t *ressource_explosion(all_ruru *all);
    arrow_t *ressource_arrow(all_ruru *all);
    sword_t *ressource_sword(all_ruru *all);
    slow_t *ressource_slow(all_ruru *all);
    void draw_spell(all_ruru *all);
    sfVector2i pos_spell_render(all_ruru *all);
    void active_spell_elec(all_ruru *all);
    void active_spell_explo(all_ruru *all);
    void active_attack_arrow(all_ruru *all);
    void active_attack_sword(all_ruru *all);
    void event_spell(all_ruru *all);

    void gestion_spell_all(all_ruru *all);
    void gestion_spell_elec(all_ruru *all);
    void gestion_spell_explo(all_ruru *all);
    void gestion_attack_arrow(all_ruru *all);
    void gestion_attack_sword(all_ruru *all);
    void gestion_attack_arrow_mob(all_ruru *all);
    void rotation_arrow(sfSprite *arrow, sfVector2f deplacement);

    void destroy_electrical(all_ruru *all);
    void destroy_slow(all_ruru *all);
    void destroy_explosion(all_ruru *all);

#endif
