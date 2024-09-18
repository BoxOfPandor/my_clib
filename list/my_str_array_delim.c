/*
** EPITECH PROJECT, 2024
** B-CPE-200-LIL-2-1-robotfactory-thibault.pouch
** File description:
** my_str_array_delim.c
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

int count_delimiters(const char *str, char delim)
{
    int i = 0;
    int delim_count = 0;

    while (str[i] != '\0') {
        if (str[i] == delim)
            delim_count++;
        i++;
    }
    return delim_count;
}

char **my_str_array_delim(char const *str, char delim)
{
    int iDeb = 0;
    int delim_count = count_delimiters(str, delim);
    char **ret = calloc((delim_count + 5) * sizeof(char *), 1);
    int index = 0;

    if (ret == NULL)
        return NULL;
    for (int i = 0; i < my_strlen(str) + 1; i++) {
        if (str[i] == delim || str[i] == '\0') {
            ret[index] = malloc(i - iDeb + 1);
            my_strncpy(ret[index], &str[iDeb], i - iDeb);
            ret[index][i - iDeb] = '\0';
            index++;
            iDeb = i + 1;
        }
    }
    free(ret[index]);
    ret[index] = NULL;
    return (ret);
}
