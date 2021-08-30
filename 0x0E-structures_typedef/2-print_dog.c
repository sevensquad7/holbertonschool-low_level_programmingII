#include "dog.h"

/**
 * print_dog - function prints a struct dog
 * @d: data dog
 *
 */

void print_dog(struct dog *d)
{
if (d == NULL)
{
printf("(nil)\n");
}
else
{
printf("Name: %s\nAge: %f\nOwner: %s\n", (d->name == NULL ? "(nil)" : d->name),
d->age, (d->owner == NULL ? "(nil)" : d->owner));
}
}
