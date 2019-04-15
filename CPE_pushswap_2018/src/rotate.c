/*
** EPITECH PROJECT, 2018
** CPE_pushswap_2018
** File description:
** rotate.c
*/

#include "../include/pushswap.h"

element_t *get_last_elem(to_sort_t *list)
{
    to_sort_t *tmp_l = malloc(sizeof(to_sort_t));
    element_t *tmp_elem;

    if (is_null(tmp_l))
        return (NULL);
    for (tmp_l->first = list->first; tmp_l->first != NULL;
                    tmp_l->first = tmp_l->first->next)
        tmp_elem = tmp_l->first;
    free(tmp_l);
    return (tmp_elem);
}

void rotate_any(to_sort_t *list, char id, int print)
{
    element_t *one = list->first;
    element_t *two = get_last_elem(list);

    if (is_null(two))
        return;
    list->first = one->next;
    one->prev = two;
    one->next = NULL;
    two->next = one;
    if (print) {
        my_putchar('r');
        print_operation(id);
    }
}

void rotate_both(to_sort_t *l_a, to_sort_t *l_b)
{
    rotate_any(l_a, 'a', 0);
    rotate_any(l_b, 'b', 0);
    my_putstr("rr");
}