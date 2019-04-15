##
## EPITECH PROJECT, 2018
## CPE_pushswap_2018
## File description:
## Makefile
##

NAME	=	push_swap

CC		=	gcc

RM		=	rm -f

SRCS	=	./src/main.c				\
			./src/parse_list_to_sort.c	\
			./src/print_ops.c			\
			./src/swap.c				\
			./src/push.c				\
			./src/rotate.c				\
			./src/rev_rotate.c			\
			./src/sort_list.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-g -I./include -Llib -lmy -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	cd lib/my && make re 
	$(CC) $(OBJS) -o $(NAME) $(CFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) lib/libmy.a
	$(RM) lib/my/libmy.a

re: fclean all

.PHONY: all clean fclean re
