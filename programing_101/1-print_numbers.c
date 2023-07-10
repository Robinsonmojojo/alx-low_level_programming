#include "variadic_function.h"
#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(k);
	unsigned int l;

	va_start(k, l);


	for (l = 0; l < n; l++)
	{
		printf("%d", va_arg(k, n));

		if (l != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
