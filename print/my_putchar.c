/*
** EPITECH PROJECT, 2023
** Libmy
** File description:
** Task 01 - libmy
*/
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
