/*
** EPITECH PROJECT, 2023
** my_strstr
** File description:
** task 05 - my_strstr
*/
#include "my.h"

static void veriff_strstr(char *str, char const *to_find, strstr_vars_t *vars)
{
    if (str[vars->i] == to_find[vars->j]) {
        if (vars->j == 0) {
            vars->indexdeb = vars->i;
        }
        vars->nbCharCorrect++;
        vars->j++;
    } else {
        vars->nbCharCorrect = 0;
        vars->j = 0;
    }
    vars->i++;
}

char *my_strstr(char *str, char const *to_find)
{
    strstr_vars_t vars = {0, 0, 0, 0};

    while ((vars.i < my_strlen(str)) &&
        (vars.nbCharCorrect != my_strlen(to_find))) {
        veriff_strstr(str, to_find, &vars);
    }
    if (vars.nbCharCorrect == my_strlen(to_find))
        return (str + vars.indexdeb);
    else
        return (0);
}
