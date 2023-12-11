##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## makes mylib
##

fichier = $(wildcard *.c)

NAME = my_organized

all: my_organized

my_organized:
	gcc $(fichier) -o my_organized
	chmod 755 my_organized

clean:
	rm -f *.o
	rm -f *~
	rm -f *#

fclean: clean
	rm -f $(NAME)

re: fclean all