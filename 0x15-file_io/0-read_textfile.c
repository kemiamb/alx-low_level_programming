#include "main.h"
/**
 * read_textfile - reads a text and prints it to the stdout
 * @filename: file to read from
 * @letters: number of letters to read and print
 * Return: actual number of letters read and printed
 */
ssize-t read_textfile(const char *filename, size_t letters)
{
	int fd, readtxt, writetxt;
	char  *buf;


	buf = malloc(letters);

	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	readtxt = read(fd, buf, letters);
	if (readtxt == -1)
		return (0);

	writetxt = write(STDOUT_FILENO, buf, readtxt);
	if (readtxt == -1)
		return (0);

	if (close(fd) == -1)
		return (0);

	free(buf);
	return (writetxt);
}
