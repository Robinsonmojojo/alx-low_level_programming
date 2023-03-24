#include "main.h"

/**
 * print_numbers - prints the numbers
 * Return: 0
 */

void print_numbers(void)
{
	int a = 0;
	int b = 9;

	while (a <= b)
	{
		_putchar(a + '0');
		a++;
	}

	_putchar('\n');
}
