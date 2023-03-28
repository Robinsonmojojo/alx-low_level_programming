#include "main.h"

/**
 * strlen -  returns the length of a string
 * @s: string
 * Return: 0
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (0);
}
