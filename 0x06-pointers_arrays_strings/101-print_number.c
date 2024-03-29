#include "main.h"
/**
 * print_number - function that prints an integer.
 * @n: integer
 * Return: Always 0.
 */



void print_number(int n)
{
	int i = 1;
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	num = n;
	n /= 10;
	while (n)
	{
		i *= 10;
		n /= 10;
	};
	do {
		_putchar(num / i + '0');
		num %= i;
		i /= 10;
	} while (i);
}
