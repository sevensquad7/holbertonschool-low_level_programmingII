#include "dog.h"

/**
 * copy - function copy data string
 * @str: string of characters
 *
 * Return: copy of the string
 */

char *copy(char *str)
{
	char *cop;
	int len = 0, i;

	while (str[len] != '\0')
	{
		len++;
	}
	cop = malloc((len + 1) * sizeof(char));
	if (cop == NULL)
	{
		free(cop);
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		cop[i] = str[i];
	}
	cop[i] = '\0';
	return (cop);
}

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
	char *na = name;
	char *ow = owner;
		dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = copy(na);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->age = age;
	dog->owner = copy(ow);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	return (dog);
}
