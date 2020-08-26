/*
** EPITECH PROJECT, 2020
** dna_and_rna
** File description:
** First part of the options
*/

#include "my.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int print_end_of_line(char c, int i)
{
    if (i != 0)
        printf("\n%c", c);
    else
        printf("%c", c);
    while (c != '\n') {
        c = getchar();
        printf("%c", c);
    }
    return 0;
}

int option1(char **av)
{
    int j = 0;
    char c = av[1][0];

    if (av[2] != NULL)
        return 84;
    for (int i = 0; (c = getchar()) != EOF; i++) {
        j = (c == '>') ? print_end_of_line(c, i) : -1;
        if (c == 'a' || c == 't' || c == 'g' || c == 'c' || c == 'n')
            c -= 32;
        if (c == 'A' || c == 'T' || c == 'G' || c == 'C' || c == 'N')
            printf("%c", c);
    }
    j = 0;
    printf("\n");
    return j;
}

int option2(char **av)
{
    int j = 0;
    char c = av[1][0];

    for (int i = 0; (c = getchar()) != EOF; i++) {
        j = (c == '>') ? print_end_of_line(c, i) : -1;
        if (c == 'a' || c == 't' || c == 'g' || c == 'c' || c == 'n')
            c -= 32;
        if (c == 'A' || c == 'G' || c == 'C' || c == 'N')
            printf("%c", c);
        else if (c == 'T')
            printf("U");
    }
    j = 0;
    printf("\n");
    return j;
}