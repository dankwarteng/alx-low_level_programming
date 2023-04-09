#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int file_d,b_rd,b_w;
char *buffer;
buffer = malloc(sizeof(char) * letters);

	
if (filename == NULL)
return (0);

if (buffer == NULL)
return (0);

file_d = open(filename, O_RDONLY);

b_w = write(STDOUT_FILENO, buffer, read(file_d, buffer, letters));
if (file_d == -1 || b_w == -1)
return (0);	
close(file_d);
free(buffer);
return (b_w);
}

