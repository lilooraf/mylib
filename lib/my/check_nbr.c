/*
** EPITECH PROJECT, 2019
** check_num
** File description:
** check_num
*/

int my_strlen(char const *str);

int check_nbr(char *av)
{
    int j;
    int a = 0;
    int y;

    if (!av)
        return (0);
    for (j = 0, y = 1; av[j]; j++, y++) {
        (my_strlen(av) == 1 && av[0] == '-') ? a = 1 : a;
        (((av[j] < 48 || av[j] > 57) && av[0] != '-') ||
        ((av[y] < 48 || av[y] > 57) && av[y] != 0)) ? a = 1 : a;
    }
    return (a);
}