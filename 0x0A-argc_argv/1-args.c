#include "main.h"
#include <stdio.h>

/**
 * main - print number of argument
 * @argc: print argumet
 * @argv: print number
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
