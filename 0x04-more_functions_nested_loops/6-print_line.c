#include "main.h"
#include <stdio.h>

/**
 * print_line - a straight line in the termina
 * @n: money
 * Return: 0
 */

void print_line(int n)
{
	int r = 0;

	if (n <= 0)
		putchar('\n');
	else
	{
		while (r < n)
		{
			putchar('_');
			r++;
		}
		putchar('\n');
	}
}
