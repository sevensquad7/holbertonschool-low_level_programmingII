#include "holberton.h"
/**
 * _isupper - function that checks for uppercase character.
 *@c: char to checked
 * Return: 1 if c is uppercase or 0 otherwise
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
