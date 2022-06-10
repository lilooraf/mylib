/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#ifndef __MY_H__
#define __MY_H__

#include <stddef.h>
#include <stdbool.h>
#include "struct.h"
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <glob.h>

void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_str_isalpha(char const *str);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
int my_str_isprintable(char const *str);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
void my_put_nbr(int nb);
void my_putchar(char c);
void my_putchar_to(char c, int output);
int my_putstr(char const *);
int my_putstr_to(char const *, int output);
int my_putstrn(char const *);
int my_getnbr(char const *str);
int my_strlen(char const *str);
int my_putnbr_base(int nb, char const *base);
char *my_strcpy(char *dest, char *src);
char *my_strdup(char const *src);
void *my_calloc(size_t elem_size, size_t elems);
char **my_str_to_word_array(char *str);
char **my_str_to_word_array_char(char *str, char c);
char *my_clear_str(char *str);
int usage(int ac, char **av);
int check_nbr(char *av);
char *strcpy_end(char *dest, char *src);
void my_putchar_error(char c);
int my_putstr_error(char const *str);
int my_putstrn_error(char const *str);
char *read_file(char *fp);

#endif
