#include "main.h"

/**
 * main - money
 * @n: prints the sign of a number
 * print_sign -  function that prints the sign of a numbe..
 * Return: 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else 
	{
		_putchar(48);
		return(0);
	}
}
