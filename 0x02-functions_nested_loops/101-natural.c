#include <stdio.h>

/**
 * main - money
 * Description - a program that computes and prints the sum of all the multiples
 * Return: 0
 */

int main(void)
{
	int c = 0;
	int sum = 0;

	while (c < 1024)
	{
		if (c % 3 == 0 || c % 5 == 0)
		{
			sum += c;
		}

		c++;
	}
	pritf("%i\n", sum);
	return (0);
}
