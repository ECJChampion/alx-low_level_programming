#include "main.h"
/**
 * print_chessboard - a function that prints a chessboard
 * @a: pointer containing the chessboard to be printed
 * Return: always 0
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; a[i][7]; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
