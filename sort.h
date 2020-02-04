#ifndef SORT_H
#define SORT_H
#include <stddef.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: const int type
 * @prev: Pointer to previous element of the list
 * @next: Pointer to next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

#endif
