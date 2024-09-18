/*
** EPITECH PROJECT, 2024
** B-PSU-200-LIL-2-1-minishell1-thibault.pouch
** File description:
** my_scan.c
*/
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char *my_scan(void)
{
    char *line = NULL;
    size_t len = 0;
    ssize_t read = getline(&line, &len, stdin);

    if (read == -1) {
        write(2, "Erreur lors de la lecture de l'entrée\n", 38);
        return NULL;
    }
    if (line[read - 1] == '\n') {
        line[read - 1] = '\0';
    }
    return line;
}
