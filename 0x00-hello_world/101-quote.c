#include <stdio.h>
#include <string.h>

/**
* main - Main function
*
* Return: Print a message without printf or puts
*/
int main(void)
{
	char l[99] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int length = strlen(l);
	int i = 0;
	
	while (i < length)
	{
		putchar(l[i]);
		i++;
	}
	return (1);
}
