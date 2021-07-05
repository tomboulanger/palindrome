/*
** EPITECH PROJECT, 2021
** my_strlen
** File description:
** my_strlen
*/

#include "../include/my.h"

int my_strlen(char const *str)
{
    int e = 0;

    for (int i = 0; str[i] != '\0'; i++)
        e++;
    return (e);
}