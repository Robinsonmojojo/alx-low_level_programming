#include "main.h"
#include <stdio.h>

/**
 * _puts - followed by a new line
 * @str: I do not fear
 * Return: 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}
