#include "holberton.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: string to analyze
 * Return: Run man strlen to learn more
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
