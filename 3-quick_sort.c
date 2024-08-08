#include "sort.h"

/**
 * quick_sort - sorts an array of integers in
 * ascending order using the Quick sort algorithm
 * @array: an array of numbers to sort
 * @size: the size of the array
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_helper(array, 0, size - 1, size);
}

/**
 * quick_sort_helper - sorts an array of integers in
 * ascending order using the Quick sort algorithm
 * @array: an array of numbers to sort
 * @start: the start of the array
 * @end: the end of the array
 */
void quick_sort_helper(int *array, size_t start, size_t end, size_t size)
{
	size_t pivot;

	if (end <= start)
		return;

	pivot = get_pivot(array, start, end);
	print_array(array, size);
	if (pivot > 0)
		quick_sort_helper(array, start, pivot - 1, size);
	quick_sort_helper(array, pivot + 1, end, size);
}

/**
 * get_pivot - partitions the array and gets the pivot
 *
 * @array: the array of numbers
 * @start: the start of the array
 * @end: the end of the array
 *
 * Return: the pivot
 */
size_t get_pivot(int *array, size_t start, size_t end)
{
	int pivot = array[end];
	size_t i = start - 1, j = start;

	while (j <= end - 1)
	{
		if (array[j] < pivot)
		{
			i++;
			swap_ints(&array[i], &array[j]);
		}
		j++;
	}
	i++;
	swap_ints(&array[i], &array[end]); /* swap arr[i] & pivot */

	return (i);
}

/**
 * swap_ints - swaps 2 numbers in an array
 * helper function for quick_sort
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
