/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-secured-thibault.pouch
** File description:
** my_strdup.c
*/

#include <stdlib.h>
#include <string.h>
#include "my.h"

char *my_strdup(const char *s)
{
    char *duplicate = (char *)malloc(my_strlen(s) + 1);

    if (s == NULL)
        return NULL;
    if (duplicate != NULL)
        my_strcpy(duplicate, s);
    return duplicate;
}
