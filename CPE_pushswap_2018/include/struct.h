/*
** EPITECH PROJECT, 2018
** CPE_pushswap_2018
** File description:
** struct.h
*/

#ifndef STRUCT_H
#define STRUCT_H

#define FAILURE 84
#define SUCCESS 0

typedef struct s_element {
    int nb;
    struct s_element *next;
    struct s_element *prev;
} element_t;

typedef struct s_to_sort {
    element_t *first;
    element_t *last;
} to_sort_t;

#endif /* STRUCT_H */