##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## make units tests
##

SRC =	main.c	\
	word_array/my_str_to_word_array.c	\
	word_array/my_word_len.c	\
	word_array/my_strlen.c	\
	ncurse/ncurses_loop.c	\
	linked_list/create_node.c	\
	linked_list/print_node.c	\
	linked_list/printw_node.c	\
	linked_list/rm_node.c	\
	linked_list/add_node_stat.c	\
	lower_section/get_stat.c	\
	lower_section/open_stat_file.c	\

NAME	=	my_top

CFLAGS += -g3 -iquote ./include

OBJ	=	$(SRC:.c=.o)

.PHONY = all re clean fclean

all:		$(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) -I./include -lncurses

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
