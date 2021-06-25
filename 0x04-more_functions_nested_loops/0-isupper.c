#include "holberton.h"
/*
 * _isupper - function that checks for uppercase character.
 * @A: equals 1
 * @a: equals 0
 * Return: 1 if c is uppercase or 0 otherwise
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <='Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
