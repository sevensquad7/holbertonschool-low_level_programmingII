#include "holberton.h"
/**
 * factorial - returns the factorial of a given number
 * @n: integer for the factorial
 *
 * Return: factorial of n, 1 if n = 0 or -1 if n < 0
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
