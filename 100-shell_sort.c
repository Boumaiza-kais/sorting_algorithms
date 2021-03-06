#include "sort.h"

/**
 * shell_sort - Shell sort
 * @array: int type (pointer)
 * @size: size_t type
 * Return : nothing
 */
void shell_sort(int *array, size_t size)
{
size_t n = 0;
size_t i, j;
int tmp = 0;

if (!array || !size)
return;
while (n <= (size / 3))
{
n = n * 3 + 1;
}
while (n > 0)
{
for (i = n; i < size; i++)
{
tmp = array[i];
for (j = i; j >= n && array[j - n] > tmp; j = j - n)
{
array[j] = array[j - n];
}
array[j] = tmp;
}
print_array(array, size);
n = (n - 1) / 3;
}
}
