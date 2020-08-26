/*
** EPITECH PROJECT, 2020
** k_mers
** File description:
** K-mers option for fastaTOOLS
*/

#include <stdlib.h>
#include <string.h>
#include "my.h"
#include <stdio.h>

int option4(char **av)
{
    int j = 0;
    size_t a = 0;
    char *str;
    char **dest;

    if (av[2] == NULL || atoi(av[2]) < 1)
        return 84;
    for (int i = 0; getline(&str, &a, stdin) != -1; i++) {
        if (str[0] != '>')
            dest[j] = my_strdup(dest[j], str);
        j = (str[0] == '>' && i != 0) ? j + 1 : j;
    }
    return 0;
}

int option5(char **av)
{
    if (av[2] != NULL)
        return 84;
    return 0;
}

int option6(char **av)
{
    if (av[2] != NULL)
        return 84;
    return 0;
}

int option7(char **av)
{
    if (av[2] != NULL)
        return 84;
    return 0;
}