#include "holberton.h"
/**
 * puts_half - function that prints half of a string
 * @str: input string
 * Return: print the second half of the string
 *
 */
void puts_half(char *str)
{
	int second, i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if ((i + 1) % 2 == 0)
	{
		second = (i + 1) / 2;
	}
	else
	{
		second = i / 2;
	}
	while (second < i)
	{
		_putchar(str[second]);
		second++;
	}
	_putchar('\n');
}
