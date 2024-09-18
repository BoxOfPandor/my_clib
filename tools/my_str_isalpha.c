/*
** EPITECH PROJECT, 2023
** Libmy
** File description:
** Task 01 - libmy
*/
#include "my.h"

static int veriff(char const *str, int i)
{
    int j = 0;

    if ((str[i] >= 97) && (str[i] <= 122)){
        j = 1;
    }
    return (j);
}

int my_str_isalpha(char const *str)
{
    int i = 0;
    int length = my_strlen(str);
    int verif = veriff(str, i);

    if (length == 0)
        return (1);
    while (i < length) {
        if (((str[i] >= 65) && (str[i] <= 90)) || verif == 1)
            i++;
        else
            return (1);
    }
    return 0;
}
