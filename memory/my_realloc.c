/*
** EPITECH PROJECT, 2024
** B-PSU-200-LIL-2-1-minishell1-thibault.pouch
** File description:
** my_realloc.c
*/

#include <stdlib.h>
#include "my.h"

char *my_realloc(char *old_array, int new_size)
{
    int i = 0;
    char *new_array = malloc(new_size * sizeof(char *));

    if (new_array == NULL)
        return NULL;
    while (i < new_size && old_array[i] != '\0') {
        new_array[i] = old_array[i];
        i++;
    }
    new_array[i] = '\0';
    return new_array;
}
