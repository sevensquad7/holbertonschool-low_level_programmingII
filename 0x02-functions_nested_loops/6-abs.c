#include "holberton.h"

/**
 * _abs - function that computes the absolute value of an integer
 *@n: the input
 * Return: n is absolute value
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
