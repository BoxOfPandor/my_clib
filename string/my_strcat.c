/*
** EPITECH PROJECT, 2023
** Libmy
** File description:
** Task 01 - libmy
*/

#include "my.h"

void my_strcat(char *dest, char const *src)
{
    int longueur = 0;

    longueur = my_strlen(dest);
    for (int i = 0; i <= my_strlen(src); i++) {
        dest[longueur + i] = src[i];
    }
}
