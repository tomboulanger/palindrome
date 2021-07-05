/*
** EPITECH PROJECT, 2021
** error.c
** File description:
** error
*/

#include "../include/palindrome.h"
#include "../include/my.h"

int error_gestion(int ac, char **av)
{
    if (ac % 2 == 0 || ac < 3 || ac > 9)
        return (84);
    for (int i = 0; i != ac; i++) {
        if ((my_strcmp(av[i], "-n") == 1) && (check_if_number(av[i + 1]) == 1))
            return (84);
        if ((my_strcmp(av[i], "-p") == 1) && (check_if_number(av[i + 1]) == 1))
            return (84);
        if ((my_strcmp(av[i], "-b") == 1) && (check_if_number(av[i + 1]) == 1))
            return (84);
        if ((my_strcmp(av[i], "-imin") == 1) &&
        (check_if_number(av[i + 1]) == 1))
            return (84);
        if ((my_strcmp(av[i], "-imax") == 1) &&
        (check_if_number(av[i + 1]) == 1))
            return (84);
    }
    if (second_errorgestion(ac, av) == 84)
        return (84);
    return (0);
}

int second_errorgestion(int ac, char **av)
{
    for (int i = 0; i != ac; i++) {
        if ((my_strcmp(av[i], "-n") == 1) && (my_getnbr(av[i + 1]) < 0))
            return (84);
        if ((my_strcmp(av[i], "-p") == 1) && (my_getnbr(av[i + 1]) < 0))
            return (84);
        if ((my_strcmp(av[i], "-b") == 1) &&
        ((my_getnbr(av[i + 1]) <= 1) || (my_getnbr(av[i + 1]) > 10)))
            return (84);
        if ((my_strcmp(av[i], "-imin") == 1) && (my_getnbr(av[i + 1]) < 0))
            return (84);
        if ((my_strcmp(av[i], "-imax") == 1) && (my_getnbr(av[i + 1]) < 0))
            return (84);
    }
    return (0);
}

void print_no_solution(v_var *a)
{
    if (a->no_solution == 0)
        my_putstr("no solution\n");
}
