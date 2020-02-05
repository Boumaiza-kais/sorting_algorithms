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
if (i < j)
{
swap(&array[i], &array[j]);
print_array(array, size);
}
}
}
if (array[up] < array[i + 1])
{
swap(&array[i + 1], &array[up]);
print_array(array, size);
}
return (i + 1);
}


/**
 * qk_sort - sorts a partition of an array
 * @array: array to sort
 * @lo: lowest index of the partition to sort
 * @up: highest index of the partition to sort
 * @size: size of the array
 * Return: nothing
 */

void qk_sort(int *array, int lo, int up, size_t size)
{
int piv;
if (lo < up)
{
piv = lomuto_partition(array, lo, up, size);
qk_sort(array, lo, piv - 1, size);
qk_sort(array, piv + 1, up, size);
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
qk_sort(array, 0, size - 1, size);
}
