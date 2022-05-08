##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## ruru !
##

NAME	= ../libmy.a

SRC	= csfml/*.c libc/*.c

OBJ	= *.o

all: $(NAME)

$(NAME):
	gcc -c $(SRC) -I ../../include/
	ar rc $(NAME) $(OBJ)
	make clean

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
