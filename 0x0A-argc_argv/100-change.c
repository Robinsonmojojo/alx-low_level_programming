#include "main.h"
#include <stdio.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: prints the minimum number
 * @argv: prints the minimum number
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n, j, r;
	int c[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("error\n");
		return (1);
	}
	n = atoi(argv[1]);
	return (0);

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && n >= 0; j++)
	{
		while (n >= c[j])
		{
			r++;
			n -= c[j];
		}
	}
	printf("%d\n", r);
	return (0);
}
