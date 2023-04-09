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
	int fd_in, fd_out, read_file, check;
	char buffer[BUFFERSIZE];
	/*Opening a file for writing by the owner*/
	mode_t mode_file = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	/*Block of algorithm for validate data*/
	if (argc != 3)
		/*print to a file descriptor */
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_in = open(argv[1], O_RDONLY);
	if (fd_in == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	fd_out = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode_file);
	if (fd_out == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	read_file = check = 1;
	while (read_file)
	{
		read_file = read(fd_in, buffer, BUFFERSIZE);
	if (read_file == -1) /*If can't read*/
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
		if (read_file > 0)
		{
			check = write(fd_out, buffer, read_file);
			if (check == -1) /*If can't write*/
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	check = close(fd_in); /*close file*/
	if (check == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_in), exit(100);

	check = close(fd_out);

	if (check == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_out), exit(100);
	return (0);
}
