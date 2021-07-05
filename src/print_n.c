/*
** EPITECH PROJECT, 2021
** print.c
** File description:
** print
*/

#include "../include/my.h"
#include "../include/palindrome.h"

void print_result_n2(v_var *a, char *str)
{
    if (a->status_imax == 1 && a->status_imin == 1) {
        if (a->iterations <= a->imax && a->iterations >=
        a->imin && a->imin <= a->imax) {
            print_flag_n(a, str);
            a->no_solution++;
        }
    }
    if (a->no_solution == 0)
        my_putstr("no solution\n");
}

void print_flag_n(v_var *a, char *str)
{
    int nb = convert_base_to_ten(str, a->base);

    my_putstr(a->nb);
    my_putstr(" leads to ");
    my_put_nbr(nb);
    my_putstr(" in ");
    my_put_nbr(a->iterations);
    my_putstr(" iteration(s) in base ");
    my_put_nbr(a->base);
    my_putchar('\n');
}

void print_result_n(v_var *a, char *str)
{
    if (a->status_imax == 1 && a->status_imin == 0) {
        if (a->iterations <= a->imax) {
            print_flag_n(a, str);
            a->no_solution++;
        }
    }
    if (a->status_imax == 0 && a->status_imin == 1) {
        if (a->iterations >= a->imin) {
            print_flag_n(a, str);
            a->no_solution++;
        }
    }
    if (a->status_imin == 0 && a->status_imax == 0) {
        if (a->iterations >= 0 && a->iterations <= 100) {
            print_flag_n(a, str);
            a->no_solution++;
        }
    }
    print_result_n2(a, str);
}