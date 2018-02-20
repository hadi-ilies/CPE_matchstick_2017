##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC	=	$(SRC_DIR)main.c \
		$(SRC_DIR)init_struct.c \
		$(SRC_DIR)insert_to_array.c \
		$(SRC_DIR)get_next_line_shell.c \
		$(SRC_DIR)my_turn.c \
		$(SRC_DIR)cond.c \
		$(SRC_DIR)my_turn_part.c \
		$(SRC_DIR)ai.c \
		$(SRC_DIR)bat.c \
		$(SRC_DIR)xor.c

SRC_DIR	=	src/

INC_DIR	=	include/

LIB_DIR	=	lib/

OBJ=            $(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -I $(INC_DIR) -g -fdiagnostics-color

LDFLAGS	=	-L $(LIB_DIR) -lmy

NAME=           matchstick

all:            $(NAME)

$(NAME):        $(OBJ)
		make -C $(LIB_DIR)
		gcc -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
		make clean -C $(LIB_DIR)
		rm -f $(OBJ)

fclean:		clean
		make fclean -C $(LIB_DIR)
		rm -f $(NAME)

re:		fclean all
