#ifndef MAIN_H
#define MAIN_H

/* ↓ LIBRARIES ↓ */
#include <stdlib.h>
#include <stdio.h>
/* ------------------- */

/* ↓ STRUCTS AND MISC ↓ */
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
/* ------------------- */

/* ↓ FUNCTIONS ↓ */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quick_sort_helper(int *array, size_t start, size_t end, size_t size);
size_t get_pivot(int *array, size_t start, size_t end, size_t size);
int swap_if_needed(int *a, int *b);
void swap_ints(int *a, int *b);
listint_t *find_new_head(listint_t *list);
/* ------------------- */

#endif /* MAIN_H */
