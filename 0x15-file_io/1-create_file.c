#include "main.h"
/**
 * create_file - Creates a file.
 * @filename: Name of created file.
 * @text_content: Text written in the created file.
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc)
 */

int create_file(const char *filename, char *text_content)
{
	int file_d, w_file;

	if (filename == NULL)
		return (-1);
	file_d = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (file_d == -1) 
	{
		return (-1);
	}

	if (text_content == NULL)
		return (1);
	w_file= write(file_d, text_content, strlen(text_content));
	close(file_d);
	if (w_file == -1)
	{
		close(file_d); 
		return (-1);
	}

	return (1);
}
