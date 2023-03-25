#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers
 * Return: 0
 */

void print_numbers(void)
{
	int i = 0, r = 9;

	while (i <= r)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
}
