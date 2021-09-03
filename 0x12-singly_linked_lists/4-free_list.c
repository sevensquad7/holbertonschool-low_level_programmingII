#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the start of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current, *current2;

	current = head;
	while (current != NULL)
	{
		current2 = current->next;
		free(current->str);
		free(current);
		current = current2;
	}

}
