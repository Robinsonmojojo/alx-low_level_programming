#include "main.h"

/**
 * _strspn -  prefix substring
 * @s:  prefix substring
 * @accept:  prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				i++;
			}
			else if (accept[r + 1] == '\0')
			{
				return (i);
			}
		}
		s++;
	}
	return (i);
}
