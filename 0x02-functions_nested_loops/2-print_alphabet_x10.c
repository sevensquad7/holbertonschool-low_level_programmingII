#include "holberton.h"

/*
 *main - check the code for Holberton School students.
 *
 *Return: Always 0.
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
