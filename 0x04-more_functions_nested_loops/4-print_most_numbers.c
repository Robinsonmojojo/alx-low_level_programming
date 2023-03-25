#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers -  prints the numbers
 * Return: 0
 */

void print_most_numbers(void)
{
	int i = 0, r = 9;

	while (i <= r)
	{
		if (!(i == '2' || i == '4'))
			putchar(i);
		i++;
	}
	putchar('\n');
}
