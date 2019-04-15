/*
** EPITECH PROJECT, 2018
** CPE_pushswap_2018
** File description:
** rev_rotate.c
*/

#include "../include/pushswap.h"

void rev_rotate_any(to_sort_t *list, char id, int print)
{
    element_t *one = list->first;
    element_t *two = get_last_elem(list);

    if (is_null(two))
        return;
    list->first = two;
    two->prev->next = NULL;
    two->next = one;
    two->prev = NULL;
    one->prev = two;
    if (print) {
        my_putstr("rr");
        print_operation(id);
    }
}

void rev_rotate_both(to_sort_t *l_a, to_sort_t *l_b)
{
    rev_rotate_any(l_a, 'a', 0);
    rev_rotate_any(l_b, 'b', 0);
    my_putstr("rrr");
}