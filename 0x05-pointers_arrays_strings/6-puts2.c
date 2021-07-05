#include "holberton.h"
/**
 * puts2 - function that prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: input string
 * Return: prints every other character of a string
 *
 */
void puts2(char *str)
{
	unsigned int i= 0;

	while (str[i] != '\0')
	{
		if ((i% 2) == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
