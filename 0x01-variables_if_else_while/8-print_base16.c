#include <stdio.h>
/**
 * main - program that prints all the numbers of base 16 in lowercase
 * followed by a new line.
 * Return: 16 character.
 */

int main(void)
{
	int an;

	for (an = 48; an <= 57; an++)
	{
		putchar(an);
	}
	for (an = 97; an <= 102; an++)
	{
		putchar(an);
	}
	putchar('\n');

	return (0);
}
