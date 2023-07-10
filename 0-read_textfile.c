#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t n_read;
    char *buf = malloc(sizeof(char) * letters);

    if (!filename || !buf)
        return (0);

    n_read = 0;
    if ((n_read = fread(buf, sizeof(char), letters, fopen(filename, "r"))) == -1)
        return (0);

    fwrite(buf, sizeof(char), n_read, stdout);
    fclose(fopen(filename, "r"));
    free(buf);

    return (n_read);
}

