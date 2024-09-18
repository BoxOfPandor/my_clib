/*
** EPITECH PROJECT, 2023
** Libmy
** File description:
** Task 01 - libmy
*/
#include "my.h"

static void condition(char *srt, int i)
{
    if ((srt[i] >= 97) && (srt[i] <= 122))
        srt[i] = srt[i] - 97 + 65;
}

char *my_strcapitalize(char *srt)
{
    int i = 0;
    int length = my_strlen(srt);
    int bEspace = 0;

    while (i < length) {
        if (bEspace == 1) {
            condition(srt, i);
        }
        if (srt[i] == 32)
            bEspace = 1;
        else
            bEspace = 0;
        i++;
    }
    return srt;
}
