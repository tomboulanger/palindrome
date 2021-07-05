/*
** EPITECH PROJECT, 2021
** print_p
** File description:
** print_p
*/

#include "../include/palindrome.h"
#include "../include/my.h"

void print_flag_p(v_var *a, int nb)
{
    my_put_nbr(nb);
    my_putstr(" leads to ");
    my_putstr(a->nb);
    my_putstr(" in ");
    my_put_nbr(a->iterations);
    my_putstr(" iteration(s) in base ");
    my_put_nbr(a->base);
    my_putchar('\n');
}

void print_result(v_var *a, int nb)
{
    if (a->status_imax == 1 && a->status_imin == 0) {
        if (a->iterations <= a->imax) {
            print_flag_p(a, nb);
            a->no_solution++;
        }
    }
    if (a->status_imax == 0 && a->status_imin == 1) {
        if (a->iterations >= a->imin) {
            print_flag_p(a, nb);
            a->no_solution++;
        }
    }
    if (a->status_imin == 0 && a->status_imax == 0) {
        if (a->iterations >= 0 && a->iterations <= 100) {
            print_flag_p(a, nb);
            a->no_solution++;
        }
    }
    print_result_p2(a, nb);
}

void print_result_p2(v_var *a, int nb)
{
    if (a->status_imax == 1 && a->status_imin == 1) {
        if (a->iterations <= a->imax && a->iterations >=
        a->imin && a->imin <= a->imax) {
            print_flag_p(a, nb);
            a->no_solution++;
        }
    }
}

void print_special_case(v_var *a, int nb)
{
    my_put_nbr(nb);
    my_putstr(" leads to ");
    my_putstr(a->nb);
    my_putstr(" in 0 iteration(s) in base ");
    my_put_nbr(a->base);
    my_putchar('\n');
}