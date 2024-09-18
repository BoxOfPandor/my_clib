/*
** EPITECH PROJECT, 2023
** Libmy
** File description:
** Task 01 - libmy
*/
#include "my.h"

int my_str_isprintable(char const *str)
{
    int i = 0;
    int length = my_strlen(str);

    if (length == 0)
        return (1);
    while (i < length) {
        if ((str[i] >= 32) && (str[i] <= 126))
            i++;
        else
            return (0);
    }
    return 1;
}
