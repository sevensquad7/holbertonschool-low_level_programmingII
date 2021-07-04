#include "holberton.h"

/**
 * print_number - pfunction that prints an integer.
 * @n: number to print
 * Return: print _putchar
 */

void print_number(int n)
{
	long nprint;

	if (n < 0)
	{
		_putchar('-');
		nprint = -n;
	}
	else
	{
		nprint = n;
	}
	if (nprint / 10)
	{
		print_number(nprint / 10);
	}
	_putchar(nprint % 10 + '0');
}
