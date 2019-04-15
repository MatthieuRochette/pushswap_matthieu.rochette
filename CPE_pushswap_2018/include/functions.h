/*
** EPITECH PROJECT, 2018
** CPE_pushswap_2018
** File description:
** functions.h
*/

#ifndef FUNC_H
#define FUNC_H

#include "struct.h"

int is_null(void *ptr);
to_sort_t *get_list_to_sort(int ac, char **av);
void my_print_list(to_sort_t *list);
void sort_list(to_sort_t *l_a, to_sort_t *l_b);
void swap_any(to_sort_t *list, char id, int print);
void swap_both(to_sort_t *l_a, to_sort_t *l_b);
void print_operation(char id);
void push_any(to_sort_t *l_a, to_sort_t *l_b, char id);
void rotate_any(to_sort_t *list, char id, int print);
element_t *get_last_elem(to_sort_t *list);
void rev_rotate_both(to_sort_t *l_a, to_sort_t *l_b);
void rev_rotate_any(to_sort_t *list, char id, int print);
void sort_list(to_sort_t *l_a, to_sort_t *l_b);
int is_already_sorted(char **av, int ac);

#endif /* FUNC_H */