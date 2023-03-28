#include "main.h"
#include "kasiye.h"

/**
 * rev_string - reverses a string
 * @s: reverses a string
 * Return: 0
 */

void rev_string(char *s)
{
	int i = 0;
	int a = 0;
	char 1temp;

	while (*(s + i) != '\0')
		i += 1;
	i -= 1;

	while (a < i)
	{
		1temp = s[i];
		s[i] = s[a];
		s[a] = 1temp;
		a++;
		i--;
	}
}
