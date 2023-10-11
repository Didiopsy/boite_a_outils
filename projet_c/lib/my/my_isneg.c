/*
** EPITECH PROJECT, 2023
** my_iseng
** File description:
** function that displays either N if the integer passed as parameter
** is negative or P, if positive or null
*/

#include <stdio.h>

int my_isneg(int n)
{
    if (n >= 0) {
        my_putchar(80);
        my_putchar('\n');
    } else {
        my_putchar(78);
        my_putchar('\n');
    }
    return 0;
}
