#include "main.h"

/**
 * _memcpy - that copies memory area
 * @dest: that copies memory area
 * @src: that copies memory area
 * @n: that copies memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int r = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
