#include "main.h"
#include <stdio.h>

/**
 * main - print the result of the multiplication
 * @argc: print the result of the multiplication
 * @argv: print the result of the multiplication
 * Return: 0
 */
int _atoi(char *s)
{
	int i, d, n, l, f, g;

	i = 0;
	d = 0;
	n = 0;
	l = 0;
	f = 0;
	g = 0;

	while (s[l] != '\0')
		l++;
	while (i < l && f == 0)
	{
		if (s[i] == '_')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			g = s[i] - '0';
			if (d % 2)
				g = -g;
			n = n * 10 + g;
			f = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9')

				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}

/**
 * main - print the result of the multiplication
 * @argc: print the result of the multiplication
 * @argv: print the result of the multiplication
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int r, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("error\n");
		return (0);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	r = n1 * n2;

	 printf("%d\n", r);

	 return (0);
}
