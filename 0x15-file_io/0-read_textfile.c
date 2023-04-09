#include "main.h"
/**
* read_textfile - Reads a text file and prints in POSIX stdout.
* @filename: File 2 read.
* @letters: Number of letter it should read and print.
* Return: Actual number of letter it could read and print.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int file_d,b_w;
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

