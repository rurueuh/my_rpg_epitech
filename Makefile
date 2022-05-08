##
## EPITECH PROJECT, 2022
## makefile_gen_epitech
## File description:
## Makefile
##

NAME_BINARY 	=	my_rpg

SRC 	= \
src/fps/gestion_fps.c		\
src/ressource/fps/ressource_fps.c		\
src/ressource/window/ressource_window.c		\
src/ressource/window/destroy_window.c		\
src/ressource/all/ressource_all.c		\
src/ressource/player/ressource_class.c		\
src/ressource/player/ressource_player.c		\
src/ressource/ray/ressource_ray.c		\
src/ressource/view/ressource_view.c		\
src/ressource/enemy/ressource_enemy.c		\
src/ressource/spell/electic/ressource_electical.c		\
src/ressource/spell/electic/destroy_electrical.c		\
src/ressource/spell/ressource_spell.c		\
src/ressource/spell/destroy_spell.c		\
src/ressource/spell/explo/destroy_explo.c		\
src/ressource/spell/explo/ressource_explo.c		\
src/ressource/spell/slow/destroy_slow.c		\
src/ressource/spell/slow/ressource_slow.c		\
src/ressource/map/map.c		\
src/draw/draw_enemy.c		\
src/draw/draw_player.c		\
src/draw/draw.c		\
src/draw/draw_ray.c		\
src/draw/draw_map_floor.c	\
src/draw/draw_map_wall.c	\
src/draw/draw_node.c		\
src/draw/draw_spell.c		\
src/view/view_gestion.c		\
src/startscreen/ressource/window/start_ressource_window.c		\
src/startscreen/ressource/startscreen/start_ressource_all.c		\
src/startscreen/ressource/start_anim/start_ressource_start_anim.c		\
src/startscreen/ressource/start_main_page/start_ressource_main_page.c		\
src/startscreen/animation/start_anim_main.c		\
src/startscreen/draw/start_draw_main_menu.c		\
src/startscreen/draw/start_draw_all.c		\
src/startscreen/settings/main_settings.c		\
src/startscreen/event/start_event.c		\
src/startscreen/main/main_start_screen.c		\
src/startscreen/settings/main_settings.c	\
src/pausescreen/main/main.c	\
src/pausescreen/ressource/buttons_ressource.c	\
src/pausescreen/event/pause_event.c	\
src/pausescreen/draw/pause_draw.c	\
src/malloc/free_main.c		\
src/malloc/malloc_main.c		\
src/event/player_rotate.c		\
src/event/anim_move_player.c	\
src/event/event_spell.c		\
src/event/enemy_event.c		\
src/event/player_move.c		\
src/event/event.c		\
src/ray_casting/vertex_ray_player.c	\
src/ray_casting/vertex_ray_wall.c	\
src/event/convertor.c		\
src/draw/draw_mana_hp.c		\
src/enemy/remove_enemy_id.c		\
src/enemy/print_pos_enemy_id.c		\
src/enemy/remove_enemy_hp_area.c		\
src/enemy/enemy_gestion.c		\
src/enemy/create_enemy.c		\
src/enemy/remove_enemy.c		\
src/enemy/node/node_len.c		\
src/enemy/node/node_empty.c		\
src/enemy/node/node_create.c		\
src/enemy/node/node_get_id.c		\
src/enemy/node/node_remove_midlist.c		\
src/enemy/node/node_remove.c		\
src/enemy/node/node_print.c		\
src/mana_hp/mana_gestion.c		\
src/enemy/node/node_remove_first.c		\
src/spell/active/active_elec.c		\
src/spell/active/active_explo.c		\
src/spell/gestion/gestion_all_spell.c		\
src/spell/gestion/gestion_elec.c		\
src/spell/gestion/gestion_explo.c		\
src/main/check_file.c		\
src/ray_casting/thread_ray_player.c		\
src/main/main_all.c		\
src/main/destroy.c		\
src/main/rpg.c		\
src/collision/collision_cross.c	\
src/collision/collision_diags.c	\
src/collision/collision_main.c	\
src/ray_casting/ray_casting_wall_col.c	\
src/enemy/enemy_gestion_attack.c	\
src/event/event_player_invincible.c	\
src/ressource/pnj/ressource_pnj.c		\
src/ressource/spell/arrow_t/ressource_arrow.c	\
src/spell/active/active_arrow.c		\
src/spell/gestion/gestion_arrow.c		\
src/spell/gestion/gestion_arrow2.c		\
src/draw/draw_pnj.c		\
src/pnj/draw_pnj_interface.c		\
src/ressource/spell/sword_t/ressource_sword.c	\
src/spell/active/active_sword.c		\
src/spell/gestion/gestion_sword.c		\
src/xp_gestion/level_up.c		\
src/pnj/pnj_chosee.c		\
src/pnj/main_pnj.c		\

CSFML_FLAG	=	-lcsfml-graphics	\
	     		-lcsfml-network 	\
				-lcsfml-system 		\
				-lcsfml-window		\
				-lcsfml-audio

OBJ	=	$(SRC:.c=.o) \
		$(shell find . -name '*.gcda' -exec rm -rf {} \;)	\
		$(shell find . -name '*.gcno' -exec rm -rf {} \;)	\
		$(shell find . -name '*.gcov' -exec rm -rf {} \;)

LIB	=	-L lib/ -lm -lmy $(CSFML_FLAG)

INCLUDE	=	-I include/ -I include_struct/

WARNING	=	-W \
			-Wall \
			-Wextra \
			-Werror \
			-Wwrite-strings

COMPILATOR	=	gcc

COMPILATOR_DEBUG	=	gcc -g

start:
	@echo compiling lib
	@echo
	@cd lib/my && make -s
	@echo "succes"
	@echo
	@make all -s

all: $(OBJ)
	echo
	echo all file compiled ready
	echo
	echo
	echo "\033[5m\033[1;92m\033[40m\e[48;2;0;0;0m\
	 __        __                              ___  ___         ___\033[0m"
	echo "\033[5m\033[1;92m\033[40m\e[48;2;0;0;0m\
	|__) |  | |__) |  |        |\/|  /\  |__/ |__  |__  | |    |__ \033[0m"
	echo "\033[5m\033[1;92m\033[40m\e[48;2;0;0;0m\
	|  \ \__/ |  \ \__/        |  | /~~\ |  \ |___ |    | |___ |___\033[0m"
	echo
	echo
	echo remove writing, use make all for watch
	$(COMPILATOR) $^ -o $(NAME_BINARY) $(LIB) $(INCLUDE)

debug: $(OBJ)
	@cd lib/my && make -s
	@echo
	@echo all file compiled ready
	@echo
	@echo
	@echo "\033[5m\033[1;92m\033[40m\e[48;2;0;0;0m\
	 __        __                              ___  ___         ___\
	        __   ___  __        __ \033[0m"
	@echo "\033[5m\033[1;92m\033[40m\e[48;2;0;0;0m\
	|__) |  | |__) |  |        |\/|  /\  |__/ |__  |__  | |    |__ \
	       |  \ |__  |__) |  | / _ \033[0m"
	@echo "\033[5m\033[1;92m\033[40m\e[48;2;0;0;0m\
	|  \ \__/ |  \ \__/        |  | /~~\ |  \ |___ |    | |___ |___\
	       |__/ |___ |__) \__/ \__>\033[0m"
	@echo
	@echo
	@echo remove writing, use make all for watch
	$(COMPILATOR_DEBUG) $^ -o $(NAME_BINARY) $(LIB) $(INCLUDE)

.c.o:
	@echo compile $(notdir $(basename $^)) in $^
	@gcc -g -c -o $(basename $^).o $< $(LIB) $(INCLUDE)

re:
	@make clean -s
	@cd lib/my && make re -s
	@make
	@echo
	@echo all file compiled ready
	@echo
	@echo
	@echo
	@echo

run: debug
	@echo
	@echo execute binary without args ...
	@echo
	@./$(NAME_BINARY)
	@echo
	@echo coverage :
	@echo $(shell gcov object/*)
	@echo
	@echo

clean:
	@rm -f $(OBJS)
	@rm -f $(NAME_BINARY)
	@find -name '*.o' -exec rm -rf {} \;
	@find . -name '*.gcda' -exec rm -rf {} \;
	@find . -name '*.gcno' -exec rm -rf {} \;
	@find . -name '*.gcov' -exec rm -rf {} \;

fclean:
	@rm -f $(OBJS)
	@rm -f $(NAME_BINARY)
	@find -name '*.o' -exec rm -rf {} \;
	@find -name '*.gcda' -exec rm -rf {} \;
	@find -name '*.gcno' -exec rm -rf {} \;
	@find -name '*.gcov' -exec rm -rf {} \;
