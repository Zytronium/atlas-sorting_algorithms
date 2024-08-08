#include "sort.h"

/**
 * quick_sort - sorts an array of integers in
 * ascending order using the Quick sort algorithm
 * @array: an array of numbers to sort
 * @size: the size of the array
 */
void quick_sort(int *array, size_t size)
{
	size_t i = -1, j = 0, pivot = array[size];

	while (j <= size)
	{
		if (array[j] < pivot)
		{
			i++;
			swap_ints(&array[i], &array[j]);
		}
		j++;
	}
	i++;
	swap_ints(&array[i], &array[size]); /* swap arr[i] & pivot */

}

int get_pivot()
{
	int pivot;

	return (pivot);
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
