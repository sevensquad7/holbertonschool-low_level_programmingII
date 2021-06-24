#include "holberton.h"

/*
 * _islower - lower is 1 and other 0
 *
 * return: 1 is lowercase and 0 otherwise
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
