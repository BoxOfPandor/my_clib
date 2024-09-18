/*
** EPITECH PROJECT, 2023
** Libmy
** File description:
** Task 01 - libmy
*/
#include "my.h"

char *my_revstr(char *str)
{
    int i = 0;
    int length = my_strlen(str);
    char temp;

    while (i < length / 2) {
        temp = str[length - 1 - i];
        str[length - 1 - i] = str[i];
        str[i] = temp;
        i++;
    }
    return str;
}
