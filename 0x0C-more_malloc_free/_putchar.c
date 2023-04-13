#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the caracter c to stdout
 * @c: the caracter to print
 * Return: 1
 * An error, -1 is returned, and error is set appropriatly
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}
