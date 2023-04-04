#include "main.h"
#include <stdio.h>

/**
 * _chessboard - prints the chessboard
 * @a: prints the chessboard
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int r;

	for (i = 0; i < 8; i++)
	{
		for (r = 0; r < 8; r++)
		{
			putchar(a[i][r]);
		}
		putchar('\n');
	}
}
