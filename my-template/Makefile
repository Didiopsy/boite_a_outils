##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## makes mylib
##

NAME = libmy.a

fichier = $(wildcard *.c)

all: libmy.a

libmy.a:
	gcc -c $(fichier)
	ar rc $(NAME) *.o

clean:
	rm -f *.o
	rm -f *~
	rm -f *#

fclean: clean
	rm -f $(NAME)

re: fclean all
