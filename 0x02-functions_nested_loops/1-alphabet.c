#include "holberton.h"

/**
* print_alphabet - print_alphabet.
*
* Return: Alphabet
*/
void print_alphabet(void)
{
	char letra;

	for (letra = 'a'; letra <= 'z'; letra++)
	{
		_putchar(letra);
	}
	_putchar('\n');
}
