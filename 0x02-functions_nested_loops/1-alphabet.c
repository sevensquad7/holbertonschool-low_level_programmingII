#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0\.
 */

char letra;
int i;

void print_alphabet_x10(void)
{
for(letra = 'a' ; letra <= 'z' ; letra++)
{
_putchar(letra);
}
_putchar('\n');
}
