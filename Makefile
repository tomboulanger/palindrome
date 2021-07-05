##
## EPITECH PROJECT, 2021
## makefile
## File description:
## makefile
##

SRC	=   $(wildcard ./src/*.c) \
		$(wildcard ./functions/*.c) \

OBJ	=	$(SRC:.c=.o)

CFLAGS = -Wall -Wextra -g3

NAME	=	palindrome

CC		=	gcc

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)
	rm -f src/*.o
	rm -f functions/*.o

clean:
	rm -f $(OBJ)
	rm -f *~

fclean: clean
	rm -f $(NAME)

re: fclean all