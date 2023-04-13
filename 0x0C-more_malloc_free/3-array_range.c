#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimam
 * @max: maximam
 * Return: 0
 */
int *array_range(int min, int max)
{
	int *p;
	int i, k;

	if (min > max)
		return (NULL);
	k = max - min + 1;

	ptr = malloc(sizeof(int) * k);

	if (ptr == NULL)
		return (NULL);

	if (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
