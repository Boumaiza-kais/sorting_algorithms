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

	while (i < size)
	{
		while (j < size - i - 1)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		 j = j++ ;
                 }
	  i = i++ ;
          }
}
