#include "main.h"

/**
 * print_times_table -  mathematical equation, which, turn it how you will,
 * @n:  times table, starting with 0
 * Return: 0
 */

void print_times_table(int n)
{
	int a = 0, r, b;

	if (n < 0 || n > 15)
		return;

	while (a <= n)
	{
		for (b = 0; b <= n; b++)
		{
			r = a * b;
			if (b == 0)
				_putchar('0' + r);
			else if (r < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + r);
			}
			else if (r < 100)
			{
				_putchar(' ');
				_putchar('0' + r / 10);
				_putchar('0' + r % 10);
			}
			else
			{
				_putchar('0' + r / 100);
				_putchar('0' + (r - 100) / 10);
				_putchar('0' + r % 10);
			}
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}
			
		}
		_putchar('\n');
                        a++;
	}
}
