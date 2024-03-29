#include "main.h"

/**
 * main - Each new term in the Fibonacci sequence is generated
 * by adding the previous two terms.
 * By starting with 1 and 2, the first 10 terms will be:
 * 1, 2, 3, 5, 8, 13, 21, 34, 55, 89.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
long t1 = 0, t2 = 1, nextTerm = 0, sum = 0;

while (nextTerm < 4000000)
{
nextTerm = t1 + t2;
if (nextTerm % 2 == 0)
sum += nextTerm;
t1 = t2;
t2 = nextTerm;
}
printf("%ld", sum);
printf("\n");
return (0);
}
