#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: pointer to head node of the doubly linked list that needs to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *lastElmnt;

	current = (*list)->next;
	lastElmnt = current->prev;

	while (current->next)
	{
		if (current->prev->n > current->n)
		{
			/* copy current node to temp node */
			listint_t temp = *current;
			/* shift last element over to right */
			lastElmnt->

		}
		current = current->next;
		lastElmnt = current->prev;
	}
}
