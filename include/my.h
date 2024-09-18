/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** task.h
*/
#include <stdarg.h>

#ifndef MY_H
    #define MY_H

typedef struct strstr_vars {
    int i;
    int j;
    int indexdeb;
    int nbCharCorrect;
} strstr_vars_t;

//--------------- LIST ---------------//
void my_show_word_array(char const **tab);
char **my_str_array_delim(char const *str, char delim);
char **my_str_array(char const *str);

//-------------- MEMORY --------------//
char *my_realloc(char *old_array, int new_size);

//-------------- NUMBER --------------//
int count_number(int num);
void my_put_nbr(int nb);
void my_isneg(int n);
int my_getnbr(char const *str);

//-------------- PRINT  --------------//
void my_putstr(char const *str);
void my_error(char *str);
void my_putchar(char c);
void my_printf(char const *format, ...);

//-------------- STRING --------------//
char *my_strupcase(char *str);
char *my_strncpy(char *dest, char const *src, int n);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncat(char *dest, char const *src, int nb);
char *my_strlowcase(char *str);
char *my_strdup(const char *s);
char *my_strcpy(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
void my_strcat(char *dest, char const *src);
char *my_strcapitalize(char *srt);
char *my_revstr(char *str);

//-------------- TOOLS ---------------//
char *my_strstr(char *str, char const *to_find);
int my_strlen(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isalpha(char const *str);

#endif
