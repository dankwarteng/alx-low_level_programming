/**
* read_textfile - Reads a text file and prints in POSIX stdout.
* @filename: File 2 read.
* @letters: Number of letter it should read and print.
* Return: Actual number of letter it could read and print.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fdes, size;
char *buffer;
buffer = malloc(sizeof(char) * letters);

	
if (filename == NULL)
return (0);

if (buffer == NULL)
return (0);

fdes = open(filename, O_RDONLY);

size = write(STDOUT_FILENO, buffer, read(fdes, buffer, letters));
if (fdes == -1 || size == -1)
return (0);	
close(fdes);
free(buffer);
return (size);
}

