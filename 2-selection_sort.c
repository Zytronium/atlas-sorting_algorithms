#include "sort.h"

/**
 * selection_sort - sorts an array of integers in
 * ascending order using the Selection sort algorithm
 * @array: an array of numbers to sort
 * @size: the size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		size_t idxOfMin = i, j;

		for (j = i + 1; j < size; j++) /* find min num in remaining numbers */
		{
			if (array[j] < array[idxOfMin])
				idxOfMin = j;
		}
		if (i != idxOfMin)
		{
			swap_ints(&array[i], &array[idxOfMin]);
			print_array(array, size);
		}
	}
}

/**
 * swap_ints - swaps 2 numbers in an array
 * helper function for selection_sort
 *
 * @a: the number to swap with a
 * @b: the number to swap with b
 */
void swap_ints(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
