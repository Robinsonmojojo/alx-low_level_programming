#include "main.h"
#include <stdio.h>

/**
 * puts_half - print the second half of the string
 * @str: print the second half of the string
 * Return: 0
 */

void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
		i++;
	}
	putchar('\n');
}
