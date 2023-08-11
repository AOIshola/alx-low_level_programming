#include "main.h"

/**
 * create_file - create a file
 * @filename: the name of the file to create
 * @text_content: the content to write to file
 *
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	size_t fd, length = 0, i = 0;
	ssize_t rdw;
	char *buf;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	while (text_content[i] != '\0')
	{
		length++;
		i++;
	}
	i = 0;
	buf = malloc(sizeof(*text_content) * length);
	while (text_content[i] != '\0')
	{
		buf[i] = text_content[i];
		i++;
	}

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 00600);
	rdw = write(fd, buf, length);
	if (rdw < 0)
		return (-1);

	close(fd);
	free(buf);
	return (1);
}
