/*
** EPITECH PROJECT, 2020
** main
** File description:
** FATAStools main functions
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "my.h"
#include <string.h>

int help(void)
{
    char *buffer;
    struct stat st;
    int fd = open("help", O_RDONLY);

    stat("help", &st);
    buffer = malloc(sizeof(char) * (st.st_size + 1));
    read(fd, buffer, st.st_size);
    printf("%s\n", buffer);
    free(buffer);
    return 0;
}

int main(int ac, char **av)
{
    int option;
    int (*options[7])(char **av) = {option1, option2, option3, 
    option4, option5, option6, option7};

    if (ac == 2 && strcmp(av[1], "-h") == 0)
        return (help());
    else if (ac < 2 || ac > 3)
        return 84;
    option = atoi(av[1]);
    if (option < 1 || option > 7 || 
    (option != 4 && ac == 3) || (option == 2 && ac == 3))
        return 84;
    return (options[option - 1](av));
}