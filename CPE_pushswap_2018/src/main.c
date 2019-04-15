/*
** EPITECH PROJECT, 2018
** CPE_pushswap_2018
** File description:
** main.c
*/

#include "../include/pushswap.h"

static void print_usage(void)
{
    my_putstr("USAGE\n\n    ./my_pushswap n1|-h [n2] [n3] [n4]...\n\n");
    my_putstr("DESCRIPTION\n\n    n1                    first number");
    my_putstr(" of the list to sort.\n");
    my_putstr("    -h                    print this page.\n");
    my_putstr("    [n2] [n3] [n4] ...    next numbers of the list.\n");
}

static void free_all(to_sort_t *l_a, to_sort_t *l_b)
{
    to_sort_t *tmp = malloc(sizeof(to_sort_t));
    to_sort_t *tmp2 = malloc(sizeof(to_sort_t));

    if (is_null(tmp) || is_null(tmp2))
        return;
    for (; l_a->first != NULL;) {
        tmp->first = l_a->first;
        l_a->first = l_a->first->next;
        free(tmp->first);
    }
    for (; l_b->first != NULL;) {
        tmp2->first = l_b->first;
        l_b->first = l_b->first->next;
        free(tmp2->first);
    }
    free(l_a);
    free(l_b);
    free(tmp);
    free(tmp2);
}

int is_null(void *ptr)
{
    if (ptr == NULL)
        return (1);
    return (0);
}

static int pushswap(int ac, char **av)
{
    to_sort_t *l_a = get_list_to_sort(ac, av);
    to_sort_t *l_b = malloc(sizeof(to_sort_t));

    l_b->first = NULL;
    if (is_null(l_a))
        return (1);
    if (is_already_sorted(av, ac - 1) == 0)
        sort_list(l_a, l_b);
    free_all(l_a, l_b);
    return (0);
}

int main(int ac, char **av)
{
    int error = 0;

    if (ac < 2)
        return (84);
    else if (av[1][0] == '-' && av[1][1] == 'h' && my_strlen(av[1]) == 2) {
        print_usage();
        return (0);
    } else {
        if (ac > 2) {
            error = pushswap(ac, av);
            my_putchar('\n');
        } else
            my_putchar('\n');
        if (error == 1)
            return (FAILURE);
    }
    return (SUCCESS);
}