#include "main.h"

/**
 * append_text_to_file - appends a text to the end of a file
 * @filename: name of the file
 * @text_content: string to add to end of the file
 *
 * Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t i = 0, fd, rdw;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[i] != '\0')
			i++;

		rdw = write(fd, text_content, i);
		if (rdw < 0)
			return (-1);
	}

	close(fd);
	return (1);
}
