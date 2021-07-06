#include "holberton.h"

/**
 * _strcpy - function that copies the string pointed to by src
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: string return
 * @src: string copy
 * Return: the pointer to dest
 *
 */

char *_strcpy(char *dest, char *src)
{
	int end = 0;

	while (src[end] != '\0')
	{
		dest[end] = src[end];
		end++;
	}
	dest[end] = '\0';
	return (dest);
}
