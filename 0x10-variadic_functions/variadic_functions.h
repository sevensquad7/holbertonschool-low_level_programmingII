#ifndef HOLBERTON_VARIADIC_FUNCTIONS
#define HOLBERTON_VARIADIC_FUNCTIONS
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct fmt - to link given char to function to print
 * @in: char evaluated
 * @fn: function pointer tu use
 */
typedef struct fmt
{
	char in;
	void (*fn)(va_list al);
} fmt;

#endif /* HOLBERTON_VARIADIC_FUNCTIONS */
