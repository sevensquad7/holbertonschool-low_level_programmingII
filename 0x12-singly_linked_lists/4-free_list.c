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
	list_t *current;

	current = head;
	while (current)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}

}
