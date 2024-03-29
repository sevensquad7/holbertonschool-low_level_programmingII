#include "holberton.h"

/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: s is the string for reverse
 * Return: print the text in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
