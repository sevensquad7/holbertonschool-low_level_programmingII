#include "holberton.h"

/**
 * jack_bauer - Print hours
 *
 * Return: Hours
 */

void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					if (a == 2 && b > 3)
					{
						break;
					}
					_putchar('0' + a);
					_putchar('0' + b);
					_putchar(58);
					_putchar('0' + c);
					_putchar('0' + d);
					_putchar('\n');
				}
			}
		}
	}
}
