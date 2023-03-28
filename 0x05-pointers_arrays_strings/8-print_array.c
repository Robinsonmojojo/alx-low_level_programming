#include "main.h"
#include <stdio.h>

/**
 * print_array - order as they are stored in the array
 * @a: order as they are stored in the array
 * @n: order as they are stored in the array
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(",");
	}
	printf("\n");
}
