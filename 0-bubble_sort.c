#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 *
 * @array: an array of numbers to sort
 * @size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (swap_if_needed(&array[j], &array[j + 1]))
				print_array(array, size);
		}
	}
}

/**
 * swap_if_needed - swaps 2 numbers if the 1st (a) is greater than the 2nd (b)
 * helper function for bubble_sort
 *
 * @a: the number to swap with a if a is greater than b
 * @b: the number to swap with b if a is greater than b
 *
 * Return: 1 if it swapped; 0 if not.
 */
int swap_if_needed(int *a, int *b)
{
	if (*a > *b)
	{
		int temp = *a;
		*a = *b;
		*b = temp;
		return (1);
	}
	return (0);
}
