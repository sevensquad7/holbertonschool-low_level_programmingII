#include <stdio.h>
#include <string.h>

/**
* Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
*
* The C file name will be saved in the variable $CFILE.
*The output file should be named the same as the C file, but with the extension .s instead of .c.
*Example: if the C file is main.c, the output file should be main.s
* 
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
