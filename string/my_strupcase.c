/*
** EPITECH PROJECT, 2023
** Libmy
** File description:
** Task 01 - libmy
*/
#include "my.h"

char *my_strupcase(char *str)
{
    int i = 0;
    int length = my_strlen(str);

    while (i < length) {
        if ((str[i] >= 97) && (str[i] <= 122))
            str[i] = str[i] - 97 + 65;
        i++;
    }
    return str;
}
