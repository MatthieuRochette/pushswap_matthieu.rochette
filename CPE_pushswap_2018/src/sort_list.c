/*
** EPITECH PROJECT, 2018
** CPE_pushswap_2018
** File description:
** sort_list.c
*/

#include "../include/pushswap.h"

int *get_smallest(to_sort_t *l_a, int *smallest)
{
    to_sort_t *tmp = malloc(sizeof(to_sort_t));

    smallest[0] = 2147483647;
    tmp->first = l_a->first;
    for (int i = 0; tmp->first != NULL; i++, tmp->first = tmp->first->next) {
        if (tmp->first->nb < smallest[0]) {
            smallest[0] = tmp->first->nb;
            smallest[1] = i;
        }
        l_a->last = tmp->first;
    }
    free(tmp);
    return (smallest);
}

void sort_list(to_sort_t *l_a, to_sort_t *l_b)
{
    int *smallest = malloc(sizeof(int *));

    while (l_a->first->next != NULL) {
        smallest = get_smallest(l_a, smallest);
        for (int i  = 0; i != smallest[1]; i++) {
            rotate_any(l_a, 'a', 1);
            my_putchar(' ');
        }
        push_any(l_a, l_b, 'b');
        my_putchar(' ');
    }
    while (l_b->first != NULL) {
        push_any(l_a, l_b, 'a');
        if (l_b->first != NULL)
            my_putchar(' ');
    }
    free(smallest);
}