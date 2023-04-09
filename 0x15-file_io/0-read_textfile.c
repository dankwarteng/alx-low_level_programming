#include "main.h"
/**
* read_textfile - Reads a text file and prints in POSIX standard output.
* @filename: File to read.
* @letters: Number of letters it should read and print.
* Return: Actual number of letters it could read and print.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int file_d, size;
char *buffer;
buffer = malloc(sizeof(char) * letters);

	
if (filename == NULL)
return (0);

if (buffer == NULL)
return (0);

file_d = open(filename, O_RDONLY);

b_w = write(STDOUT_FILENO, buffer, read(file_d, buffer, letters));
if (file_d == -1 || size == -1)
return (0);	
close(file_d);
free(buffer);
return (size);
}

