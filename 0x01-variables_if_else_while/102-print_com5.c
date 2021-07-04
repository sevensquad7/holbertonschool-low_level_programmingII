#include <stdio.h>

/**
 * main - program that prints all possible combinations of two two-digit numbers.
 *
 * Return: The numbers should range from 0 to 99
 */

int main(void)
{
	int a;
	int b;
	int c;
	int d;
	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					if (a < c || (a == c && b < d))
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);
						if ((a < 9 && b <= 9) || (a == 9 && b <= 7))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
}
putchar('\n');
return (0);
}
