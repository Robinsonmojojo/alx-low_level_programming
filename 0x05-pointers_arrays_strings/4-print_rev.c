#include "main.h"
#include <stdio.h>

/**
 * print_rev - followed by a new line
 * @str: followed by a new line
 * Return: 0
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	if (i = i - 1; i >= 0; i++)
		putchar(s[i]);
	putchar('\n');
}
