#include "holberton.h"

/**
 * print_line -  function that draws a straight line in the terminal.
 * You can only use _putchar function to print
 * @n: is the number of times the character
 * Return: n is the number of times the character _ should be printed
 * 
 */

void print_line(int n)
{
	int i=0;

	if (n > 0)
	{
		for( i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
