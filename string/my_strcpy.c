/*
** EPITECH PROJECT, 2023
** Libmy
** File description:
** Task 01 - libmy
*/
#include "my.h"

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    int length = my_strlen(src);

    while (i <= length) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
