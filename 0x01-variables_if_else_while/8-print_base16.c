#include <stdio.h>
#include <stdlib.h>
/**
 * main - Robinson
 * Description: print all single digit number of base 10
 * starting from 0, followed by new line.
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
