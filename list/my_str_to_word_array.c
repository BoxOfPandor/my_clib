/*
** EPITECH PROJECT, 2023
** my_str_to_word_array
** File description:
** Task 04 - my_str_to_word_array
*/
#include <stdlib.h>
#include "my.h"

char **my_str_array(char const *str)
{
    int iDeb = 0;
    int i = 0;
    char **ret = malloc(20 * 8);
    int index = 0;

    while (i < my_strlen(str)+1) {
        if ((str[i] <= 32) || (str[i] >= 127)) {
            ret[index] = malloc(i - iDeb + 1);
            my_strncpy(ret[index], str + iDeb, i - iDeb);
            index++;
            iDeb = i + 1;
        }
        i++;
    }
    return (ret);
}
