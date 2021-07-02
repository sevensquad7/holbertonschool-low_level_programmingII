#include "holberton.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 *@a: array of integers
 *@n: is the number of elements of the array
 *
 * Return: reverse elements
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int temp;
	int end = 0;

	for (start = n - 1; start > end; start--)
	{
		temp  = a[start];
		a[start]=a[end];
		a[end]=temp;
		end++;
	}
}
