#include <stdio.h>
#include <stdlib.h>
/**
 * main - Robinson
 * Desription: different commination of to digit 
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * ou can only use the putchar function (every other function (printf, puts, etc…) is forbidden
 * Return: 0
 */
int main(void)
{
	int c;
	int d = 0;

	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar('0' + d);
				putchar('0' + c);

				if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			c++;
		}

		c++;
	}
	putchar('\n');
	return (0);
}
