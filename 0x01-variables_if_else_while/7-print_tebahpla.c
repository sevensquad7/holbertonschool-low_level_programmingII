#include <stdio.h>
/**
 * main - program that prints the lowercase alphabet in reverse
 * followed by a new line.
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 122; num >= 97; num--)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
