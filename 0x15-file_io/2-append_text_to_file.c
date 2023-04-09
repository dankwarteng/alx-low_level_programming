#include "main.h"
/**
  * append_text_to_file - Appends text at the end of a file.
  * @filename: Name of the file.
  * @text_content: NULL terminated string to add at the end of the file.
  * Return: 1 on success, -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, n, status;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
    
	file_d = open(filename, O_APPEND | O_WRONLY);
	if (file_d == -1) 
		return (-1);

	for (n = 0; text_content[n] != '\0'; n++)
		;
	status = write(file_d, text_content, n);
	if (status == -1)
		return (-1);

	close(file_d);
	return (1);
}

