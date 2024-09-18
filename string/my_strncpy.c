/*
** EPITECH PROJECT, 2023
** Libmy
** File description:
** Task 01 - libmy
*/
#include "my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    int length = my_strlen(src);

    dest[0] = '\0';
    if (n > 0) {
        while ((i < length) && (i < n)) {
            dest[i] = src[i];
            dest[i + 1] = '\0';
            i++;
        }
    }
    return (dest);
}
