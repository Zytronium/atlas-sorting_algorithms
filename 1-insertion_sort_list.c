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
	if (current == NULL)
		return;
	last = current->prev;

	while (current)
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
			*list = find_new_head(*list);
			print_list(*list);
		}
		current = current->next;
		if (current)
			last = current->prev;
		/*dont need "else last = what current was" because it'll never be used*/
	}
}

/**
 * find_new_head - returns the head of a doubly linked list
 *
 * @list: any node of the doubly linked list to find the head of
 *
 * Return: the head node of the given liked list
 */
listint_t *find_new_head(listint_t *list)
{
	if (list == NULL)
		return (NULL);

	if (list->prev == NULL)
		return (list);

	return (find_new_head(list->prev));
}
