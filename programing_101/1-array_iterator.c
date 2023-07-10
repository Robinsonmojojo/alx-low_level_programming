#include <stdio.h>
#include "function_pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int l;

	if(array == NULL || action == NULL)
	return;

	for (l = 0; l < size; l++)
	{
		action(array[l]);
	}
}
