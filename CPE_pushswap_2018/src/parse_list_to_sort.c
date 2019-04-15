/*
** EPITECH PROJECT, 2018
** CPE_pushswap_2018
** File description:
** parse_list_to_sort.c
*/

#include "../include/pushswap.h"

int is_already_sorted(char **av, int ac)
{
    int n = my_getnbr(av[1]);

    for (int i = 2; i <= ac; i++) {
        if (n > my_getnbr(av[i]))
            return (0);
        n = my_getnbr(av[i]);
    }
    return (1);
}

void my_print_list(to_sort_t *list)
{
    to_sort_t *tmp = malloc(sizeof(to_sort_t));

    if (is_null(tmp) || is_null(list))
        return;
    for (tmp->first = list->first; tmp->first != NULL;
                        tmp->first = tmp->first->next)
        my_put_nbr(tmp->first->nb);
    free(tmp);
}

to_sort_t *init_list(int nb)
{
    to_sort_t *list = malloc(sizeof(to_sort_t));
    element_t *element = malloc(sizeof(element_t));

    if (is_null(list) || is_null(element))
        return NULL;
    element->nb = nb;
    element->next = NULL;
    element->prev = NULL;
    list->first = element;
    list->last = element;
    return (list);
}

void add_new_at_beginning(to_sort_t *list, int nb)
{
    element_t *new = malloc(sizeof(element_t));

    if (is_null(new))
        return;
    new->nb = nb;
    new->next = list->first;
    new->prev = NULL;
    list->first->prev = new;
    list->first = new;
}

to_sort_t *get_list_to_sort(int ac, char **av)
{
    to_sort_t *l_a = init_list(my_getnbr(av[ac - 1]));

    if (is_null(l_a))
        return NULL;
    for (int i = ac - 2; i > 0; i--) {
        add_new_at_beginning(l_a, my_getnbr(av[i]));
    }
    return (l_a);
}