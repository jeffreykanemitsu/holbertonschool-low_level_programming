#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: name of file
 * @letters: number of letters it can read and print
 *
 * Return: number of letters it could read and print
 * if filename is NULL, return 0
 * if write fails or does not write the expect amount of bytes, return 0
 */
size_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rc;
	ssize_t wc;
	char *buffer;

	buffer = malloc(sizeof(*buffer) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	rc = read(fd, buffer, letters);
	if (rc == -1)
	{
		free(buffer);
		return (0);
	}
	wc = write(STDOUT_FILENO, buffer, rc);
	if (wc != rc)
	{
		return (0);
	}
	free(buffer);
	close(fd);
	return (wc);
}
