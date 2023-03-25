#include "main.h"
#include <stdio.h>

/**
 * more_numbers - hree times in your code
 * Return: 0
 */

void more_numbers(void)
{
	int r = 0, j = 14, i;

	for (i = 1; i <= 10; i++)
	{
		while (r <= j)
		{
			putchar(r > 9 ? (r / 10) + '0' : r + '0');

			if (r > 9)
				putchar((r % 10) + '0');
			r++;
		}
		r = 0;
		putchar('\n');
	}
}
