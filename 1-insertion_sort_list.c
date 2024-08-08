#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: pointer to head node of the doubly linked list that needs to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *last;

	current = (*list)->next;
	last = current->prev;

	while (current->next)
	{
		while (last != NULL && last->n > current->n)
		{
			/* shift last element over to right */
			if (last->prev != NULL)
				last->prev->next = current;
			if (current->next != NULL)/*may not need this bc of 1st loop cndtn*/
				current->next->prev = last;
			current->prev = last->prev;
			last->prev = current;
			last->next = current->next;
			current->next = last;

			last = current->prev;
			/* might need to find and set the new head */
			print_list(*list);
		}
		current = current->next;
		last = current->prev;
	}
}
