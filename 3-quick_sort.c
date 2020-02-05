#include "sort.h"

/**
 * swap - Swap two values in
 * @i: int type
 * @j: int type
 *
 * Return: Nothing
 */

void swap(int *i, int *j)
{
int tmp;
tmp = *i;
*i = *j;
*j = tmp;
}


/**
 * lomuto_partition - finds the partition
 * @array: array to sort
 * @lo: lowest index of the partition to sort
 * @up: highest index of the partition to sort
 * @size: size of the array
 * Return: nothing
 */

int lomuto_partition(int *array, int lo, int up, size_t size)
{
int j;
int i = lo - 1;
for (j = lo ; j <= up - 1; j++)
{
if (array[j] < array[up])
{
i++;
swap(&array[i], &array[j]);
if (i != j)
{
print_array(array, size);
}
}
}
i++;
if (array[up] < array[i + 1])
{
swap(&array[i + 1], &array[up]);
if (i != up)
print_array(array, size);
}
return (i + 1);
}

/**
 * call_sort - sorts a partition of an array
 * @array: array to sort
 * @lo: lowest index of the partition to sort
 * @up: highest index of the partition to sort
 * @size: size of the array
 * Return: nothing
 */

void call_sort(int *array, size_t size, int lo, int up)
{
int piv;
if (lo < up)
{
piv = lomuto_partition(array, size, lo, up);
call_sort(array, size, lo, piv - 1);
call_sort(array, size, piv + 1, up);
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
if (size < 2)
return;
call_sort(array, 0, size - 1, size);
}
