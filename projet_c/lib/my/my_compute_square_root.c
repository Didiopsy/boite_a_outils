/*
** EPITECH PROJECT, 2023
** Projet11
** File description:
** ojojojo
*/
#include<stdio.h>
#include<string.h>

int my_compute_square_root(int nb)
{
    if ( nb <= 0 ) {
        return 0;
    }
    return r_carre(0, nb);
}

int r_carre(int i, int nb)
{
    if ( i * i == nb ) {
        return i;
    }
    if ( i * i < nb ) {
        return r_carre(( i + 1 ), nb);
    }
    if ( i * i > nb ) {
        return 0;
    }
}
