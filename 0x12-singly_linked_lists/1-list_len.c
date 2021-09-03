#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * in a linked list_t list.
 * @h: pointer to the start of the linked list
 *
 * Return: number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
		return (elements);
}
