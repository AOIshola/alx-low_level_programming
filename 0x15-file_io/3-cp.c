#include "main.h"

/**
 * check_error - checks for error when an fd is read from
 * or written to
 * @f_from: file descriptor of file to copy from
 * @f_to: file descriptor of file to copy to
 * @argv: list of arguments to main
 *
 * Return: Nothing
*/
void check_error(ssize_t f_from, ssize_t f_to, char *argv[])
{
	if (f_from < 0)
	{
		dprintf(STDERR_FILENO, "%s %s\n", "Error: Can't read from", argv[1]);
		exit(98);
	}
	if (f_to < 0)
	{
		dprintf(STDERR_FILENO, "%s %s\n", "Error: Can't write to file", argv[2]);
		exit(99);
	}
}

/**
 * check_close - check if a file closes correctly
 * @f_close: return of close function
 * @file: file to be closed
 *
 * Return: Nothing
*/
void check_close(ssize_t f_close, ssize_t file)
{
	if (f_close < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", file);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 0 on Success, exit on Error
*/
int main(int argc, char *argv[])
{
	ssize_t f_from, f_to, rdf, wrt, f_close;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	f_from = open(argv[1], O_RDONLY);
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 00664);
	check_error(f_from, f_to, argv);

	rdf = 1024;
	while (rdf)
	{
		rdf = read(f_from, buf, 1024);
		check_error(rdf, 1, argv);
		wrt = write(f_to, buf, rdf);
		check_error(1, wrt, argv);
	}

	f_close = close(f_from);
	check_close(f_close, f_from);

	f_close = close(f_to);
	check_close(f_close, f_to);

	return (0);
}
