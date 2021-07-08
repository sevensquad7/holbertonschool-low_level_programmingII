#include "holberton.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: s is the string to use
 *
 * Return: the length of a string.
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
