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
	char cadena;

	while (s[i] != '\0')
	{
		i++;
	}

	while (cadena < i)
	{
		i = i - 1;
		cadena = s[i];
		s[i] = s[j];
		s[j] = cadena;
		j--;
	}
}
