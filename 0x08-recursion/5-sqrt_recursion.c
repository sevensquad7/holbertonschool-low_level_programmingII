#include "holberton.h"

/**
 * sqrt_func - checks for the square root of c
 * @x: raiz at sqrt
 * @c: number to find sqrt of
 *
 * Return: -1 or sqrt of c
 */
int sqrt_func(int x, int c)
{
	if (x * x == c)
		return (x);
	if (x * x > c)
		return (-1);
	return (sqrt_func(x + 1, c));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 *
 * Return: natural square r -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_func(1, n));
}
