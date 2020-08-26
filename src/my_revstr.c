/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** Reverses a string
*/

#include <string.h>
#include <stdlib.h>

char *my_revstr(char *str)
{
    int a = 0;
    int b = strlen(str) - 1;
    char c;

    for (a = 0; b >= a; a++) {
        c = str[a];
        str[a] = str[b];
        str[b] = c;
        b--;
    }
    return (str);
}

char *my_strdup(char *dest, char *str)
{
    int i = 0;
    int lenght[2] = {strlen(dest), strlen(str)};
    char *old_dest = dest;

    dest = malloc(sizeof(char) * (lenght[0] + lenght[1]) + 1);
    for (i = 0; i < lenght[0]; i++)
        dest[i] = old_dest[i];
    for (int j = 0; str[j] != '\0'; j++)
        dest[i + j] = str[j];
    return dest;
}