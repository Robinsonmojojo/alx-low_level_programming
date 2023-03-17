#include <stdio.h>
/**
 * main - Robinson
 * Description: print all single digit number of base 10
 * sarting from 0, followed by new line.
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}
