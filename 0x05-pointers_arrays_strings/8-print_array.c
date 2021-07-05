#include <stdio.h>
#include "holberton.h"
/**
 * print_array - function that prints n elements of an array of integers
 * followed by a new line.
 * @a: input array
 * @n: number of elements of the array to be printed
 * Return: The numbers should be displayed in the same order
 * they are stored in the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < (n - 1))
			printf(", ");
	}
	printf("\n");
}
