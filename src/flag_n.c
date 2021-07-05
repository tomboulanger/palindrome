/*
** EPITECH PROJECT, 2021
** flag_n.c
** File description:
** flag_n
*/

#include "../include/my.h"
#include "../include/palindrome.h"

int which_flag(v_var *a, char **av)
{
    char *str = base10_convert(my_getnbr(av[2]), a->base);
    char *new = NULL;

    if (my_strcmp(av[1], "-n") == 1) {
        flag_n(a, av);
        return (0);
    }
    if (my_strcmp(av[1], "-p") == 1) {
        new = my_revstr(str);
        if (my_strcmp(new, str) != 1) {
            my_putstr("invalid argument\n");
            return (84);
        }
        flag_p(a, av);
        return (0);
    }
    my_putstr("invalid argument\n");
    return (84);
}

int gest_print_flagp(v_var *a, char *str, int nb)
{
    if (my_strcmp(str, a->convert) == 1) {
        print_result(a, nb);
        return (1);
    }
    return (0);
}

void flag_n(v_var *a, char **av)
{
    char *str = base10_convert(my_getnbr(av[2]), a->base);
    char *str2 = NULL;
    int nb = 0;

    while (1) {
        str2 = my_revstr(str);
        if (my_strcmp(str, str2) == 1)
            break;
        calcul_str_and_revstr(str, str2, a);
        str = base10_convert(a->calcul, a->base);
        nb = convert_base_to_ten(str, a->base);
        if (nb > 2147483647)
            break;
        a->iterations++;
        if (a->iterations > 100)
            break;
    }
    print_result_n(a, str);
}

void calcul_str_and_revstr(char *str, char *str2, v_var *a)
{
    a->nb1 = convert_base_to_ten(str, a->base);
    a->nb2 = convert_base_to_ten(str2, a->base);
    a->calcul = a->nb1 + a->nb2;
}