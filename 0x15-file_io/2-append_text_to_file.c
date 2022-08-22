#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: string to add at the end of the file
 * Return: 1 on success or -1 if failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	long int writetxt;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
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
