##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## makes mylib
##

NAME = libmy.a

lb = lib/*.c

all: libmy.a

libmy.a:
	gcc -c my_project.c
	ar rc $(NAME) *.o
	ar rc $(lb) *.o

clean:
	rm -f *.o
	rm -f *~
	rm -f *#

fclean: clean
	rm -f $(NAME)

re: fclean all
