/*
** EPITECH PROJECT, 2023
** my_strncmp
** File description:
** task 07 - my_strcmp
*/
#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int ls1 = my_strlen(s1);
    int ls2 = my_strlen(s2);
    int i = 0;
    int test;

    if (ls1 > n)
        ls1 = n;
    if (ls2 > n)
        ls2 = n;
    if (ls1 < ls2)
        return (0 - s2[ls1]);
    if (ls2 < ls1)
    return (s1[ls2]);
    while (i < ls1) {
        test = s1[i] - s2[i];
        if (test != 0)
            return test;
        i++;
    }
    return (0);
}
