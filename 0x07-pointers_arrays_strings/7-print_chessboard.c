#include "main.h"
/**
 * print_chessboard - function that prints the chessboard.
 * @a: spaces to print
 * Return: 0
 */

void print_chessboard(char (*a)[8]);
{
	int x = 0;
	int y = 0;

	while (x < 8)
	{
		while (y < 8)
		{
			_putchar(a[x][y]);

			y++;
		}

		_putchar ("\n");
		x++;
	}
}
