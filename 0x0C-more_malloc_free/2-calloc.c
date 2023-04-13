#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _memset - constant byet
 * @s: file
 * @b: copy
 * @n: how momy times
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
/**
 * _calloc -  allocates memory for an array
 * @nmemb: allocate
 * @size: memory
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);

	return (p);
}
