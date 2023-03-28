#include "main.h"
#include <stdio.h>

/**
 * puts_half - followed by a new line
 * @str: followed by a new lin
 * Return: 0
 */

void puts_half(char *str)
{
	int l, n, i;

	while (str[l] != '\0')
	{
		l++;
	}
	if (l % 2 == 0)
	{
		for (i = l / 2; str[i] != '\0'; i++)
		{
			putchar(str[i]);
		}
	}
	else if (l % 2)
	{
		for (n = (l - 1) / 2; n < l - 1; i++)
		{
			putchar(str[n + 1]);
		}
	}
	putchar('\n');
}
