#include "holberton.h"
/**
 * _pow_recursion - returns the factorial of a given number
 * @x: number base
 * @y: exponent
 * Return: x * y, 1 if y = 0 or -1 if y <0
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
