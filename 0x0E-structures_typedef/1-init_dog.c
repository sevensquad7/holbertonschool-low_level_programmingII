#include "dog.h"

/**
 * init_dog - function
 * @d: data structed
 * @name: name dog
 * @age: age dog
 * @owner: owner dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
