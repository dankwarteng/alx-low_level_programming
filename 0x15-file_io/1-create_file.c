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
	int fdes, wrtfile;

	if (filename == NULL)
		return (-1);

	fdes = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fdes == -1) 
	{
		return (-1);
	}

	if (text_content == NULL)
		return (1);

	wrtfile = write(fdes, text_content, strlen(text_content));
	close(fdes);
	if (wrtfile == -1) 
	{
		close(fdes); 
		return (-1);
	}

	return (1);

}
