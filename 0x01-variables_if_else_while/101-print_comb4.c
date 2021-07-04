#include <stdio.h>
/**
 * main -program that prints all possible different combinations
 * of three digits.
 * Return: combinations of numbers of three digits
 */

int main(void)
{
	int n;
	int i;
	int j;

	for (n = 48; n <= 57; n++)
	{
		for (i = n + 1; i <= 57; i++)
		{
			for (j = i + 1; j <= 57; j++)
			{
				putchar(n);
				putchar(i);
				putchar(j);

				if (!(n == 55 && i == 56 && j == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
