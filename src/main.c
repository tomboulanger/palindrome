/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "../include/palindrome.h"
#include "../include/my.h"

int main(int ac, char **av)
{
    v_var *a = malloc(sizeof(v_var));

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        my_usage();
        return (0);
    }
    if (error_gestion(ac, av) == 84) {
        my_putstr("invalid argument\n");
        return (84);
    }
    init_struct(a, av, ac);
    if (a->imax < a->imin) {
        my_putstr("invalid argument\n");
        return (84);
    }
    if (which_flag(a, av) == 84)
        return (84);
    free(a);
}

void my_usage(void)
{
    my_putstr("USAGE\n");
    my_putstr("      ./palindrome -n number -p palindrome");
    my_putstr("[-b base] [-imin i] [-imax i]\n\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("      -n n      integer to be transformed (>=0)\n");
    my_putstr("      -p pal    palindromic number to be obtained ");
    my_putstr("(incompatible with the -n \n");
    my_putstr("                option) (>=0)\n");
    my_putstr("                if defined, all fitting ");
    my_putstr("values of n will be output\n");
    my_putstr("      -b base   in which the procedure will be ");
    my_putstr("executed (1<b<=10) [def: 10]\n");
    my_putstr("      -imin i   minimum number of iterations, ");
    my_putstr("included (>=0) [def: 0]\n");
    my_putstr("      -imax i   maximum number of iterations, ");
    my_putstr("inclded (>=0) [def: 100]\n");
}

void init_structb(v_var *a)
{
    a->imax = 100;
    a->imin = 0;
    a->base = 10;
    a->status_imin = 0;
    a->status_imax = 0;
    a->no_solution = 0;
    a->nb1 = 0;
    a->nb2 = 0;
    a->calcul = 0;
}

void init_struct(v_var *a, char **av, int ac)
{
    init_structb(a);

    for (int i = 0; i != ac; i++) {
        if ((my_strcmp(av[i], "-imin") == 1) &&
        (check_if_number(av[i + 1]) == 0)) {
            a->imin = my_getnbr(av[i + 1]);
            a->status_imin = 1;
        }
        if ((my_strcmp(av[i], "-imax") == 1) &&
        (check_if_number(av[i + 1]) == 0)) {
            a->imax = my_getnbr(av[i + 1]);
            a->status_imax = 1;
        }
        if ((my_strcmp(av[i], "-b") == 1) && (check_if_number(av[i + 1]) == 0))
            a->base = my_getnbr(av[i + 1]);
    }
    a->nb = av[2];
    a->convert = base10_convert(my_getnbr(av[2]), a->base);
}

int check_if_number(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] > 57 || str[i] < 48)
            return (1);
    }
    return (0);
}