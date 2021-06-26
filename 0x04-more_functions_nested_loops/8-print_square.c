#include "holberton.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * You can only use _putchar function to print
 * size is the size of the square
 * Return: If size is 0 or less, the function should print only a new line
 * Use the character # to print the square
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
}
