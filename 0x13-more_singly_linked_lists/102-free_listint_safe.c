#include "lists.h"
listint_t *nodolist(const listint_t *n);

/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: value list
 * Return: the size of the list that was free’d
 *
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int intersec = 0;
	listint_t *nod;
	listint_t *head;
	listint_t *next;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	head = *h;
	nod = nodolist(head);
	while (head != NULL)
	{
		if (head == nod && intersec == 1)
		{
			break;
		}
		if (head == nod)
		{
			intersec = 1;
		}
		next = head->next;
		free(head);
		head = next;
		count++;
	}
	*h = NULL;
	return (count);
}
