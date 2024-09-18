/*
** EPITECH PROJECT, 2023
** Libmy
** File description:
** Task 01 - libmy
*/
#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int j = my_strlen(dest);

    if (nb > my_strlen(src))
        nb = my_strlen(src);
    while (i < nb) {
        dest[j + i] = src[i];
        dest[j + i + 1] = '\0';
        i++;
    }
    return (dest);
}
