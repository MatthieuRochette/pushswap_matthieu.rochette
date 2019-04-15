/*
** EPITECH PROJECT, 2018
** CPE_pushswap_2018
** File description:
** push.c
*/

#include "../include/pushswap.h"

void pa(to_sort_t *l_1, to_sort_t *l_2, element_t *one, element_t *two)
{
    if (l_2 != NULL) {
        l_2->first = two->next;
        two->next = one;
    }
    if (one != NULL)
        one->prev = two;
    l_1->first = two;
}

void push_any(to_sort_t *l_a, to_sort_t *l_b, char id)
{
    element_t *one = l_a != NULL ? l_a->first : NULL;
    element_t *two = l_b != NULL ? l_b->first : NULL;

    if (id == 'a') {
        pa(l_a, l_b, one, two);
    } else {
        pa(l_b, l_a, two, one);
    }
    my_putchar('p');
    print_operation(id);
}