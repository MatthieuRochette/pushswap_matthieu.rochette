/*
** EPITECH PROJECT, 2018
** CPE_pushswap_2018
** File description:
** swap.c
*/

#include "../include/pushswap.h"

void swap_any(to_sort_t *list, char id, int print)
{
    element_t *one = list->first;
    element_t *two = one != NULL ? one->next : NULL;
    element_t *three = two != NULL ? two->next : NULL;

    if (list->first != NULL && list->first->next != NULL) {
        list->first = two;
        one->prev = two;
        one->next = three;
        if (two != NULL) {
            two->prev = NULL;
            two->next = one;
        }
        if (print) {
            my_putchar('s');
            print_operation(id);
        }
    }
}

void swap_both(to_sort_t *l_a, to_sort_t *l_b)
{
    if (l_a->first != NULL && l_b->first != NULL) {
        swap_any(l_a, 'a', 0);
        swap_any(l_b, 'b', 0);
        my_putstr("sc");
    }
}