#include "main.h"
#include <stdio.h>

/**
 * main - meee
 * Return: 0
 */

int main(void)
{
	int s = 1, e = 100;

	while (s <= 100)
	{
		if (s % 3 == 0)
			printf("fizz");
		if (s % 5 == 0)
			printf("buzz");
		if (s % 3 != 0 && s % 5 != 0)
			printf("%d", s);

		putchar(s == e ? '\n' : ' ');
		s++;
	}
}
