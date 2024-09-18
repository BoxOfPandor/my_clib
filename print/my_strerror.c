/*
** EPITECH PROJECT, 2024
** B-CPE-200-LIL-2-1-robotfactory-thibault.pouch
** File description:
** my_strerror.c
*/
#include <unistd.h>
#include "my.h"

void my_error(char *str)
{
    write(2, str, my_strlen(str));
}
