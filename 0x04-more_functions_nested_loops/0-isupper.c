#include "main.h"
#include <stdio>

/**
 *  main - check the code.
 *  Return:1
 */

int _isupper(int c)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (1);
}
