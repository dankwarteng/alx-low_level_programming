#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	int b_rd, b_w;
	char *buffer;
	
	if (filename == NULL)
		return (0);
	file_d = open(filename, O_RDONLY);
	if (file_d < 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	b_rd = read(file_d, buffer, letters);
	if (b_rd < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[b_rd] = '\0';
	close(file_d);
	b_w = write(STDOUT_FILENO, buffer, b_rd);
	if (b_w < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (b_w);
}
