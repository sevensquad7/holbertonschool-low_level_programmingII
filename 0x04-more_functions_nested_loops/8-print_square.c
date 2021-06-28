#include "holberton.h"

/**
 * print_square - function that prints a square, followed by a new line.n
 * You can only use _putchar function to print
 * @size: fimentons of the square
 * Return: If size is 0 or less, the function should print only a new line
 * Use the character # to print the square
 */

void print_square(int size)
{
	int i = 0, j = 0;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
}
