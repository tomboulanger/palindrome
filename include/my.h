/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** my.h
*/

#ifndef my_h

#include <signal.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

void my_putchar(char c);
int my_putbase(int nb1, int nb3);
int my_getnbr(char const *str);
int my_putstr(char const *str);
int my_strcmp(char const *str1, char const *str2);
char *my_revstr(char *str);
int my_put_nbr(int nb);
int my_strlen(char const *str);

#endif
