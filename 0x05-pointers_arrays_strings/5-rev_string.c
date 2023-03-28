#include "main.h"

/**
 * rev_string - reverses a string
 * @s: reverses a string
 * Return: 0
 */

void rev_string(char *s)
{
	int i = 0;
	int a = 0;
	char k;

	while (*(s + i) != '\0')
		i += 1;
	i -= 1;

	while (a < i)
	{
		k = s[i];
		s[i] = s[a];
		s[a] = k;
		a++;
		i--;
	}
}
