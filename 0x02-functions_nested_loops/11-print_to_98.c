#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: number
 * Return: printed in order
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 98){
		printf("%d", n);
		printf(",");
		printf(" ");
		n--;
	} 
	else
	{
		printf("%d", n);
		printf(",");
		printf(" ");
		n++;
	} 
	}
	printf("%d\n", n);
}
