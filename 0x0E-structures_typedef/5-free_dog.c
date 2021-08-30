#include "dog.h"

/**
 * free_dog - function that frees dogs.
 * @d: a struct of a dog;
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}