#include "main.h"

/**
 *  prints 10 times the alphabet
 *  Return: 0
 */

void print_alphabet_x10(void)
{
	int r;
	int k;

	for (r = 1; r <= 10; r++)
	{
		for (k = 'a'; k <= 'z'; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}
}

