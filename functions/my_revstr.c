/*
** EPITECH PROJECT, 2020
** my_strcpy.c
** File description:
** rev
*/

#include "../include/my.h"

char *my_revstr(char *str)
{
    char *str2 = NULL;
    int len = 0;
    int i = 0;

    for (len = 0; str[len] != '\0'; len++);
    len--;
    str2 = malloc(sizeof(char) * len + 2);
    for (i = 0; len != -1; len--, i++)
        str2[i] = str[len];
    str2[i] = '\0';
    return (str2);
}