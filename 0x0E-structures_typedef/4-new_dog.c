#include "dog.h"

/**
 * new_dog - function that creates a new dog.
 * @name: name dog
 * @age: age dog
 * @owner: owner dog
 * Return: (dog)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
dog = malloc(sizeof(dog_t));

if (dog == NULL)
{
return (NULL);
}
else
{
dog->name = name;
dog->age = age;
dog->owner = owner;
}
return (dog);
}
