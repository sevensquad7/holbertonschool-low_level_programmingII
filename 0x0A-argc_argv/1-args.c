#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the number of arguments passed into it.
 * @argc: number of arguments
 * @argv: Array of arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	argv++;
	printf("%d\n", argc - 1);

	exit(EXIT_SUCCESS);
}
