#include "main.h"

/**
 * reverse_array - suspect people of plotting to make me happy
 * @a: suspect people of plotting to make me happy
 * @n: suspect people of plotting to make me happy
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int r;

	for (i = 0; i < n--; i++)
	{
		r = a[i];
		a[i] = a[n];
		a[n] = r;
	}
	return (0);
}
