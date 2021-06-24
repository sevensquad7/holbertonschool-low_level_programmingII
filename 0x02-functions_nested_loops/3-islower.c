#include "holberton.h"

/**
 * _islower - this function of c, replace the lowercase.
 *
 * @c: It is ASCII Character.
 *
 * return: 1 if is lowercase or  0 otherwise.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
