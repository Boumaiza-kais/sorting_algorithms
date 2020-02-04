#include "sort.h"
#include <stdio.h>

/**
 * part_function - finds the partition
 * @array: array to sort
 * @lo: lowest index of the partition to sort
 * @up: highest index of the partition to sort
 * @size: size of the array
 * Return: nothing
 */
size_t part_function(int *array, ssize_t lo, ssize_t up, size_t size)
{
	int j;
	int i = lo - 1;
	int pivot = array[up];

	for (j = lo ; j <= up - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(array, size, &array[i], &array[j]);
		}
	}
	swap(array, size, &array[i + 1], &array[up]);
	return (i + 1);
}

/**
 * swap - Swap two values in
 * @array: Array
 * @size: Size of array
 * @i: Value to swap
 * @j: Value to swap
 *
 * Return: Nothing
 */

void swap(int *array, size_t size, int *i, int *j)
{
	int tmp;

		if (*i != *j)
		{
		tmp = *i;
		*i = *j;
		*j = tmp;
		print_array(array, size);
		}
}

/**
 * qk_sort - sorts a partition of an array
 * @array: array to sort
 * @lo: lowest index of the partition to sort
 * @up: highest index of the partition to sort
 * @size: size of the array
 * Return: nothing
 */
void qk_sort(int *array, size_t size, int lo, int up)
{
	int partition;

	if (!array || !size)
	return;

	if (lo < up)
	{
		partition = part_function(array, size, lo, up);
		qk_sort(array, size, lo, partition - 1);
		qk_sort(array, size, partition + 1, up);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending
 * @array: The array to sort
 * @size: The size of the array
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	qk_sort(array, 0, size - 1, size);
}
