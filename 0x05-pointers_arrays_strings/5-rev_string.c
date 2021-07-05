#include "holberton.h"
/**
 * rev_string - a function that reverses a string
 * @s: input string
 * Return: Void
 *
 */
void rev_string(char *s)
{
	int i = 0;
	char *k, reverse;

	while (*(s + i) != '\0')
	{
		i++;
	}

	while (i > 0)
	{
		reverse = s[i];
		s[i] = *k;
		*k = reverse;
		k--;
		i--;
	}
}
