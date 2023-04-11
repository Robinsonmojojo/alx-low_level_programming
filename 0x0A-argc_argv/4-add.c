#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num -  positive numbers
 * @str:  positive numbers
 * Return: 0
 */

int check_num(char *str)
{
	unsigned int i;

	i =  0;
	while (i < strlen(str))
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * main -  positive numbers
 * @argc:  positive numbers
 * @argv:  positive numbers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, s;
	int sum = 0;

	i = 1;
	while (i < argc)
	{
		if (check_num(argv[i]))
		{
			s = atoi(argv[i]);
			sum += s;
		}
		else
		{
			printf("error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
