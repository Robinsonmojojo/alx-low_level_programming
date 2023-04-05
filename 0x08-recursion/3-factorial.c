#include "main.h"

/**
 * factorial - rial of a given numbe
 * @n: n
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
		return (n * factorial (n - 1));
}
