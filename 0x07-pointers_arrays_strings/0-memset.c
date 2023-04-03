#include "main.h"

/**
 * _memset - memory with a constant byte
 * @s: memory with a constant byte
 * @b: memory with a constant byte
 * @n: memory with a constant byte
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (0);
}
