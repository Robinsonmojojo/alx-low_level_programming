#include "main.h"

/**
 * _sqrt_recursion
 * @n: m
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - right
 * @val: b
 * n: m
 */
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
