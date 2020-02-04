#include "sort.h"
/**
 * insertion_sort - function that sorts a doubly linked list of integers 
 * in ascending order using the Insertion sort algorithm
 * @list : double pointer
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *prev;
	int tmp, n, i;

	curr  = *list;
	n = 0;
	while (curr)
	{
		prev = curr;
		curr = curr->next;
		while (prev->n < curr->n)
		{
			tmp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = tmp;
			n = 1;
			print_array(array, size);
		}
	}
}
