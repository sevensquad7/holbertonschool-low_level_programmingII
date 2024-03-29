#include "holberton.h"

/**
 * _puts_recursion -  function that prints a string
 * followed by a new line.
 * @s: content string
 *
 * Return: print the text of the string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
