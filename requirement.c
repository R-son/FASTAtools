/*
** EPITECH PROJECT, 2020
** requirement
** File description:
** Capitalizes the first letter of each word
*/
#define BETWEEN(value, min, max) (value <= max && value >= min)
#define NotBETWEEN(value, min, max) (value > max || value < min)

char *my_strcapitalize_synthesis(char *str)
{
    if (str[0] >= 97 && str[0] <= 122)
        str[0] = str[0] - 32;
    for (int i = 1; str[i] != '\0'; i++) {
        if ((str[i] >= 97 && str[i] <= 122) &&
        (str[i - 1] < 97 || str[i - 1] > 122) && 
        (str[i - 1] < 65 || str[i - 1] > 90) &&
        (str[i - 1], 48, 57))
        str[i] = str[i] - 32;
    }
    return str;
}