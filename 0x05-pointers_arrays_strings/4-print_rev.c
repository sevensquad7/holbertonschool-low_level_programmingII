#include "holberton.h"

/**
 * print_rev - function that prints a string, in reverse
 * followed by a new line.
 * @s: input string
 * Return: reverse string
 *
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
