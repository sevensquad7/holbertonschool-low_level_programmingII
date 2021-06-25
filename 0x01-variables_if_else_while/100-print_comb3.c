#include <stdio.h>
/**
 * main - program that prints all possible different combinations of two digits.
 * Return: prints all possible different combinations
 */

int main(void)
{
	int n;
	int i;

	for (n = 48; n <= 57; n++)
	{
		for (i = n + 1; i <= 57; i++)
		{
			putchar(n);
			putchar(i);

			if (!(n == 56 && i == 57))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
