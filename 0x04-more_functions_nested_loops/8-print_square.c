#include "main.h"
#include <stdio.h>

/**
 * print_square - check
 * @size: size
 * Return: 0
 */
void print_square(int size)
{
	int r = 0, s;

	if (size <= 0)
		putchar('\n');
	else
	{
		for (s = 0; s < size; s++)
		{
			while (r < size)
			{
				putchar('#');
				r++;
			}
			r = 0;
			putchar('\n');
		}
	}
}
