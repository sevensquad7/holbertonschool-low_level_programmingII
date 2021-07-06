#include "holberton.h"

/**
 * print_chessboard - function that prints the chessboard.
 *@*a: puntero
 *@8: number del array
 *
 * Return: prints the chessboard.
 */

void print_chessboard(char (*a)[8])
{
	int row=0,column=0;
	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
			_putchar(a[row][column]);
		_putchar('\n');
	}
}
