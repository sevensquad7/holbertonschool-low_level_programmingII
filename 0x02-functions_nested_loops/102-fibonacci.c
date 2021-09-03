#include "main.h"

/**	
 * main - Write a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *	
 * Return: On success 1.	
 * On error, -1 is returned, and errno is set appropriately.	
 */	
int main(void)	
{	
	int i;	
	long t1 = 0, t2 = 1, nextTerm;	

	for (i = 1; i <= 50; ++i)	
	{	
		nextTerm = t1 + t2;	
		if (i == 50)	
			printf("%ld", nextTerm);	
		else	
			printf("%ld, ", nextTerm);	
		t1 = t2;	
		t2 = nextTerm;	
	}	
	printf("\n");	
	return (0);	
}