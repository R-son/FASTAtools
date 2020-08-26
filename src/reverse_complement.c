/*
** EPITECH PROJECT, 2020
** reverse_complement
** File description:
** Reverse complement option for FastaTOOLS
*/

#include <stdlib.h>
#include <string.h>
#include "my.h"
#include <stdio.h>

void print_rev(char c)
{
    switch (c) {
            case 'A':
                printf("T");
                break;
            case 'T':
                printf("A");
                break;
            case 'G':
                printf("C");
                break;
            case 'C':
                printf("G");
                break;
            default:
                break;
            }
}

int reverse_comp(char *str)
{
    str = my_revstr(str);
    for (int a = 0; str[a] != '\0'; a++) {
        str[a] = (str[a] == 'a' || str[a] == 't' || str[a] == 'g' 
        || str[a] == 'c' || str[a] == 'n') ? str[a] - 32 : str[a];
        print_rev(str[a]);
    }
    printf("\n");
    return 0;
}

char *correct_dna(char *dest)
{
    int j = 0;
    char *new_dest = malloc(sizeof(char) * strlen(dest) + 1);

    for (int i = 0; dest[i] != '\0'; i++) {
        if (dest[i] == 'a' || dest[i] == 't' || dest[i] == 'g' 
        || dest[i] == 'c' || dest[i] == 'n') {
            new_dest[j] = dest[i] - 32;
            j++;
        }
    }
    return new_dest;
}

char *free_dest(int i, char *dest)
{
    if (i != 0 && dest[0] != '\0') {
        reverse_comp(dest);
        free(dest);
    }
    return dest;
}

int option3(char **av)
{
    size_t a = 0;
    char *str;
    char *dest;

    for (int i = 0; getline(&str, &a, stdin) != -1 && av[2] == NULL; i++) {
        if (str[0] == '>') {
            free_dest(i, dest);
            printf("%s", str);
        } else
            dest = my_strdup(dest, str);
    }
    if (dest[0] != '\0') {
        reverse_comp(dest);
        free(dest);
    }
    return 0;
}