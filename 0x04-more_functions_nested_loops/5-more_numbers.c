#include "holberton.h"

/**
 * more_numbers - function that prints 10 times the numbers
 * from 0 to 14
 * followed by a new line.
 *
 * Return: print of 0 to 14
 *
 */

void more_numbers(void)
{
	int a = 0, j = 0;
	    
	for (j = 0; j < 10; j++)
	{
		for (a = 0; a <= 14; a++)
		{
			int decenas = a / 10;
			int unidades = a % 10;
			if (a > 9)
			{
				_putchar('0' + decenas);
				_putchar('0'+ unidades);
			}
			else
			{
				_putchar('0'+ unidades);
			}
		}
		_putchar('\n');
	}
}
