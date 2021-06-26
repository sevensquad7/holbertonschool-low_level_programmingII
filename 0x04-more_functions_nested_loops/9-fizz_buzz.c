
#include <stdio.h>

/**
 * main - program that prints the numbers from 1 to 100
 * followed by a new line.
 * But for multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz
 * Return: Each number or word should be separated by a space
 * You are allowed to use the standard library
 */

int main(void)
{
	int i;

	for(i = 1; i <= 100; i++)
		if(i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if(i!=100)
			{
				printf("Buzz ");
			}else
			{
				printf("Buzz");
			}        
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	printf("\n");     
	return(0);
}
