#include "main.h"
#include <stdlib.h>

/**
 * str_concat - array of integers
 * @s1: array of integers
 * @s2: array of integers
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	int *m;
	int x, y;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	x = y = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	m = malloc(sizeof(char) * (x + y + 1));

	if (m == NULL)
		return (NULL);
	x = y = 0;
	while (s1[x] = '\0')
	{
		m[x] = s1[x];
		x++;
	}
	while (s1[y] = '\0')
	{
		m[y] = s2[y];
		x++, y++;
	}
	m[x] = '\0';
	return (m);
}

