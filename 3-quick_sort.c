#include "sort.h"
/**
 * partition_quicksor - finds the partition and swap
 * @array: array to sort
 * @lo: lowest index of the partition to sort
 * @up: highest index of the partition to sort
 * @size: size of the array
 * Return: nothing
 */

void partition_quicksort(int *array, int lo, int up, size_t size)
{
	int j;
	int piv;
	int i = lo - 1;

	for (j = lo; j < up; j++)
	{
		if ((array[j] < array[up]) )
		{
			i++;
			piv = array[j];
			array[j] = array[i];
			array[i] = piv;
			if (i != j)
				print_array(array, size);
		}
	}
	i++;
	if (array[up] != array[i])
	{
		piv = array[up];
		array[up] = array[i];
		array[i] = piv;
		if (i != up)
			print_array(array, size);
	}
	if (lo < i - 1)
	        partition_quicksort(array, lo, i - 1, size);
	if (i + 1 < up)
	        partition_quicksort(array, i + 1, up, size);

}


/**
 * quick_sort - quick sorting
 * @array: array
 * @size: size
 */
void quick_sort(int *array, size_t size)
{
        partition_quicksort(array, 0 , size - 1, size);
}
