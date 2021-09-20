#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_dlistint  - Print doubly linked list
 * @h: Doubly linked list
 *
 * Return: Number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}
