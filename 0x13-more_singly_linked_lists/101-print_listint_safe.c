#include "lists.h"

/**
 * nodolist - function list nodos
 * @n: data nodo
 * Return: value nodo
 *
 */

listint_t *nodolist(const listint_t *n)
{
	listint_t *turtle = (listint_t *) n, *rabit;

	if (n == NULL)
	{
		return (NULL);
	}
	rabit = turtle->next;
	while (rabit != NULL)
	{
		rabit = rabit->next;
		if (rabit == NULL)
		{
			return (NULL);
		}
		rabit = rabit->next;
		turtle = turtle->next;
		if (rabit == turtle)
		{
			rabit = (listint_t *) n;
			while (rabit != turtle)
			{
				turtle = turtle->next;
				if (rabit == turtle)
				{
					return (rabit);
				}

				rabit = rabit->next;
			}

			return (rabit);
		}

	}
	return (NULL);
}
/**
 * print_listint_safe - print list
 * @h: data nodo
 * Return: print list
 *
 */
size_t print_listint_safe(const listint_t *h)
{
	size_t count = 0;
	int intersec = 0;
	listint_t *nod = nodolist(h);

	while (h != NULL)
	{
		if (h == nod && intersec == 1)
		{
			printf("-> [%p] %d\n", (void *) h, h->n);
			return (count);
		}

		if (h == nod)
		{
			intersec = 1;
		}

		printf("[%p] %d\n", (void *) h, h->n);
		h = h->next;
		count++;

	}
	return (count);
}
