#include "main.h"

/**
 * print_chessboard - Prints the chess board
 *
 * @a: Array of elements
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}

		_putchar('\n');
	}
}
