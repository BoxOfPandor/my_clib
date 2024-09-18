/*
** EPITECH PROJECT, 2023
** mini_printf
** File description:
** main of mini_printf
*/
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

static void my_putchar(char c)
{
    write(1, &c, 1);
}

static void my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
}

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

static void my_put_nbr(int nb)
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

void my_printf(char const *format, ...)
{
    va_list list;

    va_start(list, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if ((format[i] == '%') && (format[i + 1] == 's'))
            my_putstr(va_arg(list, char *));
        if ((format[i] == '%') && (format[i + 1] == 'c'))
            my_putchar((char) va_arg(list, int));
        if ((format[i] == '%') && (format[i + 1] == '%'))
            my_putchar('%');
        if ((format[i] == '%') && ((format[i + 1] == 'i')
        || (format[i + 1] == 'd')))
            my_put_nbr(va_arg(list, int));
        if (format[i] == '%') {
            i++;
        } else {
            my_putchar(format[i]);
        }
    }
    va_end(list);
}
