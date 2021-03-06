#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked
 *list of integers in ascending order using
 * the Insertion sort algorithm
 * @list : double pointer
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr;

	if (list == NULL || *list == NULL)
		return;

	curr = (*list)->next;

	while (curr != NULL)
	{
		while ((curr->prev != NULL) && (curr->n < curr->prev->n))
		{
			curr->prev->next = curr->next;
			if (curr->next != NULL)
				curr->next->prev = curr->prev;


			curr->next = curr->prev;
			curr->prev = curr->prev->prev;
			curr->next->prev = curr;

			if (curr->prev == NULL)
			{
			*list = curr;
			}
			else
			{
			curr->prev->next = curr;
			}
			print_list(*list);
		}
		curr = curr->next;
	}
}
