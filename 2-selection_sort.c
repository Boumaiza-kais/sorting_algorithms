#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using the
 * Selection sort algorithm
 * @array: int type (pointer)
 * @size: size_t type
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i = 0, j = 0, k = 0;
	int tmp = 0;

	if (array != NULL && size >= 2)
	{
		for (i = 0; i < (size - 1); i++)
		{
			tmp = i;

			for (j = i + 1; j < size; j++)
			{
				if (array[j] < array[tmp])
				{
					tmp = j;
				}
			}

			k = array[tmp];
			array[tmp] = array[i];
			array[i] = k;

			if (array[tmp] != array[i])
				print_array(array, size);
		}
	}
}
