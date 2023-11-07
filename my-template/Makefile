##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## makes
##

fichier = $(wildcard *.c)

all: my_ls

my_ls:
	gcc -c $(fichier) my_project.c
	ar rc $(fichier) *.o

clean:
	rm -f *.o
	rm -f *~
	rm -f *#

fclean: clean
	rm -f $(fichier)

re: fclean all
