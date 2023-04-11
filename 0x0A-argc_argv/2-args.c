#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: prints all arguments
 * @argv: prints all arguments
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf ("%s\n", argv[i]);
	}

	return (0);
}
