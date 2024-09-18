/*
** EPITECH PROJECT, 2023
** Libmy
** File description:
** Task 01 - libmy
*/
#include "my.h"

static int convert_strig_int(char *string)
{
    int i = my_strlen(string)-1;
    int result = 0;
    int valeur = 0;
    int decimal = 1;

    while (i >= 0){
        valeur = (int)(string[i]) - 48;
        result = result + valeur * decimal;
        decimal = decimal * 10;
        i--;
    }
    return result;
}

static int traite_char(char const *str, char *allouer, int i, int j)
{
    if ((str[i] >= 48) && (str[i] < 58)) {
        allouer[j] = str[i];
        j++;
    } else {
        j = 0;
    }
    allouer[j] = 0;
    return (j);
}

static int calcule_retour(char *allouer, int negT)
{
    int ret = 0;

    ret = convert_strig_int(allouer);
    if (negT == 1)
        ret = 0 - ret;
    return (ret);
}

int my_getnbr(char const *str)
{
    int i = 0;
    int j = 0;
    int j2 = 0;
    int neg = 0;
    char allouer[255];

    while (i < my_strlen(str)) {
        j2 = traite_char(str, allouer, i, j);
        if ((i > 1) && (str[i - 1] == 45) && (j2 == 1))
            neg = 1;
        if (j2 == 0)
            neg = 0;
        i++;
        j = j2;
    }
    return (calcule_retour(allouer, neg));
}
