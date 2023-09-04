#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output
 * @filename: name of the file
 * @letters: number of characters in file
 *
 * Return: number of letters read and printed. or 0 if
 * filename is NULL or write fails
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rdw;
	char *buf;

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buf = malloc(sizeof(*buf) * letters);
	if (!buf)
		return (0);

	rdw = read(fd, buf, letters);
	rdw = write(STDOUT_FILENO, buf, rdw);

	if (rdw < 0)
		return (0);

	close(fd);
	free(buf);
	return (rdw);
}
