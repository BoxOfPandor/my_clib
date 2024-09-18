# Libmy

Libmy est une bibliothèque C contenant diverses fonctions utilitaires pour la manipulation de chaînes de caractères, la gestion de la mémoire, l'affichage, et plus encore.


## Installation
Pour compiler la bibliothèque, utilisez le `makefile` fourni. Exécutez simplement la commande suivante dans le répertoire racine du projet :
```sh
    make
```
Cela générera un fichier `libmy.a` que vous pourrez lier à vos projets.

## Utilisation
Incluez le fichier d'en-tête principal dans vos fichiers source pour accéder aux fonctions de la bibliothèque :
```C
    #include "my.h"
```

## Fonctions Disponibles
### List
- void my_show_word_array(char const **tab);
- char **my_str_array_delim(char const *str, char delim);
- char **my_str_array(char const *str);

### Memory
- char *my_realloc(char *old_array, int new_size);

### Number
- int count_number(int num);
- void my_put_nbr(int nb);
- void my_isneg(int n);
- int my_getnbr(char const *str);

### Print
- void my_putstr(char const *str);
- void my_error(char *str);
- void my_putchar(char c);
- void my_printf(char const *format, ...);

### String
- char *my_strupcase(char *str);
- char *my_strncpy(char *dest, char const *src, int n);
- int my_strncmp(char const *s1, char const *s2, int n);
- char *my_strncat(char *dest, char const *src, int nb);
- char *my_strlowcase(char *str);
- char *my_strdup(const char *s);
- char *my_strcpy(char *dest, char const *src);
- int my_strcmp(char const *s1, char const *s2);
- void my_strcat(char *dest, char const *src);
- char *my_strcapitalize(char *srt);
- char *my_revstr(char *str);

### Tools
- char *my_strstr(char *str, char const *to_find);
- int my_strlen(char const *str);
- int my_str_isupper(char const *str);
- int my_str_isprintable(char const *str);
- int my_str_isnum(char const *str);
- int my_str_islower(char const *str);
- int my_str_isalpha(char const *str);

## Contribuer
Les contributions sont les bienvenues! Veuillez soumettre une pull request ou ouvrir une issue pour discuter des changements que vous souhaitez apporter.

## Licence
Ce projet est sous licence MIT. Voir le fichier LICENSE pour plus de détails.