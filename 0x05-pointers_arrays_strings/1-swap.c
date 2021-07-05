#include "holberton.h"

/**
 * swap_int -  function that swaps the values of two integers
 * @a: first integer
 * @b: second integer
 * Return: result
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
