#include "holberton.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: string to append by src
 * @src: string to append to dest
 *
 * Return: concatenates two strings.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
