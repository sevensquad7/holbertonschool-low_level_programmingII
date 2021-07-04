#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 * followed by a new line.
 * Return: prime factors
 */

int main(void)
{

	int b, x;
	long int a = 612852475143;

	for (b = 2 ; b <= a ; b++)
	{
		while (a % b == 0)
		{
			a = a / b;
			x = b;
		}
	}
	printf("%d\n", x);
	return (0);
}
