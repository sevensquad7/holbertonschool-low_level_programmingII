#include "holberton.h"

/**
 * _abs - function that computes the absolute value of an integer
 *@x: the input
 * Return: absolute value
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
