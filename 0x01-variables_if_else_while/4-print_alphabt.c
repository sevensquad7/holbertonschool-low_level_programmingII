#include <stdio.h>
/**
 * main - rogram that prints the alphabet in lowercase, followed by a new line.
 * Return: 0
 */

int main(void)
{
	int alpha;

	for (alpha = 97; alpha <= 122; alpha++)
	{
		if (alpha != 101 && alpha != 113)
			putchar(alpha);
	}

		putchar('\n');

	return (0);
}
