#include "main.h"
#include <stdio>

/**
 *  _isupper - uppercase character
 *  @c: check the code
 *  Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
