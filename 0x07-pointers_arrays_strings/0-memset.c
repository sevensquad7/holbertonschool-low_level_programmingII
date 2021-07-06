#include "holberton.h"
/**
 * _memset -  function that fills memory with a constant byte.
 * @s: pointer
 * @b: char
 * @n: number of the byte to b
 *
 * Return: print pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
