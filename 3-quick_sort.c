#include "sort.h"

/**
 * partition_function - finds the partition
 * @array: array to sort
 * @lo: lowest index of the partition to sort
 * @up: highest index of the partition to sort
 * @size: size of the array
 * Return: nothing
 */
int partition_function(int *array, int lo, int up, size_t size)
{
	int i = lo - 1;
	int pivot, j;

	for (j = lo; j <= up - 1; j++)
	{
		if (array[j] < array[up])
		{
			i++;
			if (i < j)
			{
				pivot = array[i];
				array[i] = array[j];
				array[j] = pivot;
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] > array[up])
	{
		pivot = array[i + 1];
		array[i + 1] = array[up];
		array[up] = pivot;
		print_array(array, size);
	}

	return (i + 1);
}

/**
 * call_fun - sorts a partition of an array
 * @array: array to sort
 * @lo: lowest index of the partition to sort
 * @up: highest index of the partition to sort
 * @size: size of the array
 * Return: nothing
 */

void call_fun(int *array, int lo, int up, size_t size)
{
int piv;

if (lo < up)
{
piv = partition_function(array, lo, up, size);
call_fun(array, lo, piv - 1, size);
call_fun(array, piv + 1, up, size);
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
	call_fun(array, 0, size - 1, size);
}
