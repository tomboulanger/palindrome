/*
** EPITECH PROJECT, 2021
** flag_p.c
** File description:
** flag_p
*/

#include "../include/palindrome.h"
#include "../include/my.h"

void flag_p(v_var *a, char **av)
{
    char *str = NULL;
    char *str2 = NULL;

    for (int nb = 1; nb <= my_getnbr(av[2]); nb++) {
        str = base10_convert(nb, a->base);
        a->iterations = 0;
        while (1) {
            str2 = my_revstr(str);
            if (gest_print_flagp(a, str, nb) == 1)
                break;
            a->nb1 = convert_base_to_ten(str, a->base);
            a->nb2 = convert_base_to_ten(str2, a->base);
            a->calcul = a->nb1 + a->nb2;
            str = base10_convert(a->calcul, a->base);
            a->iterations++;
            if (a->calcul > my_getnbr(av[2]))
                break;
        }
    }
    print_no_solution(a);
}

void special_case(v_var *a, int nb)
{
    if (nb == my_getnbr(a->nb)) {
        if (a->status_imax == 1 && a->status_imin == 0) {
            print_special_case(a, nb);
            a->no_solution++;
        }
        if (a->status_imax == 0 && a->status_imin == 1 && a->imin == 0) {
            print_special_case(a, nb);
            a->no_solution++;
        }
        if (a->status_imin == 0 && a->status_imax == 0) {
            print_special_case(a, nb);
            a->no_solution++;
        }
    }
}