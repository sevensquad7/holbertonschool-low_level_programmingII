#include "holberton.h"

/**
 * mul - function that prints the numbers, from 0 to 9, followed by a new line.
 * you can only use _putchar twice in your code
 * Return: return axb result
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0' + a);
	}
	_putchar('\n');
}
