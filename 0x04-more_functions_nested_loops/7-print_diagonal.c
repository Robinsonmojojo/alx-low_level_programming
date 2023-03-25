#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - diagonal line on the terminal
 * @n: mo
 * Return: 0
 */

void print_diagonal(int n)
{
	int r = 0, j = 0, e;

	if (n <= 0)
		putchar('\n');
	else
	{
		while (r < n)
		{
			e = r;
			while (j <= e)
			{
				if (j == e)
				{
					putchar('\\');
					putchar('\n');
				}
				else
				{
					putchar(' ');
					j++;
				}
			}
			j = 0;
			r++;
		}
	}
}
