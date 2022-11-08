##
## EPITECH PROJECT, 2022
## EPITECH CPOOL PROJECT 2022
## File description:
## Makefie for mini_printf
##

SRC =	src/my_put_nbr.c	\
	src/my_putchar.c	\
	src/my_putstr.c		\
	src/mini_printf.c

OBJ =	$(SRC:.c=.o)

NAME =	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../

clean:
	rm -f $(OBJ)

fclean:	clean

	rm -f $(NAME)
	rm -f ../$(NAME)

re:	fclean all