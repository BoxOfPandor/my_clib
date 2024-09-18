/*
** EPITECH PROJECT, 2023
** Libmy
** File description:
** Task 01 - libmy
*/
#include "my.h"

char *my_strlowcase(char *str)
{
    int i = 0;
    int length = my_strlen(str);

    while (i < length) {
        if ((str[i] >= 65) && (str[i] <= 90))
            str[i] = str[i] - 65 + 97;
        i++;
    }
    return str;
}
