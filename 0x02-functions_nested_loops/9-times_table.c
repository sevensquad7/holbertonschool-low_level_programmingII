#include "holberton.h"
/**
 * times_table - this function sorts the data in a table
 *
 * Return: 9x9 multiplication
 *
 */

void times_table(void)
{
	int i = 0, j = 0, r = 0, unidades = 0, decenas = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			r = (i * j);
			unidades = r % 10;
			decenas = r / 10;
			if (decenas == 0)
			{
				if (j == 0)
				{
					_putchar('0' + unidades);
					_putchar(',');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + unidades);
					if (j < 9)
						_putchar(',');
				}
			}
			else
			{
				_putchar(' ');
				_putchar('0' + decenas);
				_putchar('0' +  unidades);
				if (j < 9)
					_putchar(',');
			}
		}
		_putchar('\n');
	}
}
