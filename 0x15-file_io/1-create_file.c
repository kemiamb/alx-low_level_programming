#include "main.h"
/**
 * create_file - function to create a file
 * @filename: name of the file to create
 * @text_content: string to write to the file
 * Return: 1 on success or -1 on failure
 */
int create-file(const char *filename, char *text_content)
{
	int fd; len = 0;
	long int writetxt;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		writetxt = write(fd, text_content, len);

		if (writetxt == -1)
			return (-1);
	}

	if (close(fd) == -1)
		return (-1);

	return (1);
}