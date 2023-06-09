#include "main.h"

/**
 * _pow_recursion -  raised to the power 
 * @x:  raised to the power 
 * @y:  raised to the power 
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
		return (1);
}
