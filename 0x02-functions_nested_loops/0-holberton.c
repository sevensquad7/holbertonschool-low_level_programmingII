#include "holberton.h"

/*
* Main : main function
*
* Return: Print a message \"Holberton\"
*/

int main(void)
{
	char message[] = "Holberton";
	int i = 1;
	int cadena=sizeof(message);

	for (i=1;i<cadena;i++)
	{
		_putchar(message[i]);
	}
	_putchar('\n');
	return(0);
}
