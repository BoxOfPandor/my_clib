/*
** EPITECH PROJECT, 2023
** my_show_word_array
** File description:
** Task 03 - my_show_word_array
*/
#include "my.h"

void my_show_word_array(char const **tab)
{
    int i = 0;

    while (tab[i] != 0) {
        my_putstr(tab[i]);
        my_putchar('\n');
        i++;
    }
}
