/*
** EPITECH PROJECT, 2023
** Libmy
** File description:
** Task 01 - libmy
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return i;
}
