#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - sorts an array in ascending order
 * @array: int type (pointer)
 * @size: size_t type
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;
	int tmp;

	if (size < 2)
		return;

        for (i = 0; i < size - 1; i++)
	{
	        for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		 }
          }
}
