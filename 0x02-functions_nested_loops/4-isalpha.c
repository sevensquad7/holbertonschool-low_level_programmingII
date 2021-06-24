#include "holberton.h"

/**
 * _isalpha - this function of c, replace the lowercase or uppercase.
 *
 * @c: It is ASCII Character.
 *
 * Return: 1 if is lowercase or uppercase,  0 otherwise.
 */

int _isalpha(int c)
{
	if( c >= 65 && c <= 122)
	{
		if( c > 90 && c < 97)
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	else
	{
		return (0);
	}
}
