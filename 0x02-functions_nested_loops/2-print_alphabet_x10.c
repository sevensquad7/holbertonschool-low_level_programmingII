#include "holberton.h"

/*
 * print_alphabet_x10 - function print_alphabet_x10 
 *
 * return: print alphabetx10 
 */
void print_alphabet_x10(void)
{
char letra;
int i;
	for (i = 0; i < 10; i++)
	{
		for (letra = 'a' ; letra <= 'z' ; letra++)
		{
			_putchar(letra);
		}
		_putchar('\n');
	}
}
