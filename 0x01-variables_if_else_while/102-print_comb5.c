#include <stdio.h>

/**
 * main - program that prints all possible combinations
 * of two two-digit numbers.
 *
 * Return: The numbers should range from 0 to 99
 */

int main(void)
{
int a;
int b;
int c;
int d;

for (a = 48; a <= 57; a++)
{
for (b = 48; b <= 57; b++)
{
for (c = 48; c <= 57; c++)
{
for (d = 48; d <= 57; d++)
{
if (a < c || (a == c && b < d))
{
putchar(a);
putchar(b);
putchar(' ');
putchar(c);
putchar(d);
if ((a < 57 && b <= 57) || (a == 57 && b <= 56))
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
