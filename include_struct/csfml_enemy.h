/*
** EPITECH PROJECT, 2022
** new_lib.csfml
** File description:
** csfml_window
*/

#ifndef CSFML_ENEMY_H_
    #define CSFML_ENEMY_H_

    typedef struct node_enemy {
        int enemy_number;
        int speed;
        int hp;
        int base_speed;
        sfClock *clock;
        sfSprite *sprite;
        sfVector2f pos_base;
        struct node_enemy *next;
    } node_enemy;

    typedef struct enemy_t {
        sfClock *enemypath;
        int global_speed1;
        int global_speed2;
        int enemy_id;
        int hp;
        sfTexture *texture1;
        sfTexture *texture2;
        sfIntRect rect;
        node_enemy *enemy_t;
    } enemy_t;

    node_enemy *node_create(node_enemy *node, int x, all_ruru *all
    , sfVector2f pos);
    int node_empty(node_enemy *node);
    node_enemy *node_get_enemyid(node_enemy *node, int enemy_id);
    int node_len(node_enemy *node);
    void node_print(node_enemy *node);
    node_enemy *remove_first(node_enemy *node);
    node_enemy *remove_node_id(node_enemy *node, int enemy_number);
    node_enemy *node_remove(node_enemy *node, int x);

    void create_enemy(all_ruru *all, int create, sfVector2f pos);
    void remove_enemy_hp_area(all_ruru *all, sfFloatRect area, int hp_remove);
    void gestion_enemy_attack(all_ruru *all);
    void printpos_enemy_id(all_ruru *all, int ene);
    void remove_enemy_id(all_ruru *all, int ene);

#endif
