#include "holberton.h"
/**
 * rev_string - a function that reverses a string
 * @s: input string
 * Return: Void
 *
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char cadena[999];

	while (s[i] != '\0')
	{
		cadena[i] = s[i];
		i++;
	}

	while (i > 0)
	{
		s[j] = cadena[i - 1];
		i--;
		j++;
	}
}
