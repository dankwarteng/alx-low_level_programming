#include "main.h"
#define BUFFERSIZE 1204
/**
  * 3-cp - copies the content of a file to another file.
  * @argc: Arguments count.
  * @argv: Files names.
  * Return: 0 on success
  */
int main(int argc, char **argv)
{
	int file_din, file_dout, r_file, check;
	char buffer[BUFFERSIZE];
	
	mode_t mode_file = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	
	if (argc != 3)
		
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_din = open(argv[1], O_RDONLY);
	if (file_din == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	file_dout = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode_file);
	if (file_dout == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	r_file = check = 1;
	while (r_file)
	{
		r_file = read(file_din, buffer, BUFFERSIZE);
	if (r_file == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
		if (r_file > 0)
		{
			check = write(file_dout, buffer, r_file);
			if (check == -1) 
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	check = close(file_din); 
	if (check == -1)
		dprintf(STDERR_FILENO, "Error: Can't close file_d %d\n", file_din), exit(100);

	check = close(file_dout);

	if (check == -1)
		dprintf(STDERR_FILENO, "Error: Can't close file_d %d\n", file_dout), exit(100);
	return (0);
}
