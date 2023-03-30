#include "main.h"

/**
 * _strcat - overwriting the terminating null byte
 * @dest: dest
 * @src: src
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int c;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	c = 0;
	while (src[c] != '\0')
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	dest[i] = '\0';
	return (dest);
}
