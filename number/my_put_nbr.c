/*
** EPITECH PROJECT, 2023
** my_put_nbr
** File description:
** Task 07 - my_put_nbr
*/
#include "my.h"

static void my_put_nbr_suit(int nb)
{
    int result[20];
    int i = 0;
    int unite;

    while (nb > 0) {
        unite = nb % 10;
        nb = nb / 10;
        result[i] = unite;
        i++;
    }
    i--;
    while (i >= 0) {
        my_putchar(result[i] + 48);
        i--;
    }
}

void my_put_nbr(int nb)
{
    if (nb < 0){
        my_putchar(45);
        nb = 0 - nb;
    }
    if (nb == 0) {
        my_putchar(48);
    } else {
        my_put_nbr_suit(nb);
    }
}
