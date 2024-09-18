/*
** EPITECH PROJECT, 2023
** my_strcmp
** File description:
** task 06 - my_strcmp
*/
#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int ls1 = my_strlen(s1);
    int ls2 = my_strlen(s2);
    int ls = 0;
    int i = 0;
    int test;

    ls = ls1;
    if (ls2 < ls1)
        ls = ls2;
    while (i < ls) {
        test = s1[i] - s2[i];
        if (test != 0)
            return test;
        i++;
    }
    return (0);
}
