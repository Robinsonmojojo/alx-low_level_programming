#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - contains a copy of the string given as a parameter
 * @str: s
 * Return: 0
 */

char *_strdup(char *str)
{
	char *a;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	a = malloc(sizeof(char) * (i + 1));

	if (a == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		a[r] = srt[r];
	return (r);
}
