#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion -  string, followed by a new line
 * @s:  string, followed by a new line
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
