##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## makes mylib
##

NAME = libmy.a

disp = display.c display2.c addflg.c

put = put_all.c put_all2.c put_scwr.c my_putfloat.c getpars.c

all: libmy.a

libmy.a:
	gcc -c $(disp) $(put) my_printf.c
	ar rc $(NAME) *.o

clean:
	rm -f *.o
	rm -f *~
	rm -f *#

fclean: clean
	rm -f $(NAME)

re: fclean all
