/*
** EPITECH PROJECT, 2021
** my_putbase.c
** File description:
** my_putbase
*/

#include "../include/my.h"

int convert_base_to_ten(char *str, int base)
{
    int res = 0;

    for (int i = 0; str[i]; i++)
        res = res * base + (str[i] - '0');
    return (res);
}

//BINAIRE 1010
//DECIMAL 

char *base10_convert(int nbr, int base)
{
    char *result = NULL;
    int len = 0;

    for (int cpy = nbr; cpy /= base >= 1; ++len, cpy /= base);
    result = malloc(sizeof(char) * (len + 1));
    if (nbr == 0)
        result[0] = '0';
    while (nbr >= 1) {
        result[--len] = nbr % base + '0';
        nbr /= base;
    }
    return (result);
}

// DECIMAL 10
// BINAIRE 1010
// BASE 2

