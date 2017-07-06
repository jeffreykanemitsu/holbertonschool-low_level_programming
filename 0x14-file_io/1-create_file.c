#include "holberton.h"
/**
 * create_file - creates file filename
 * @filename: name of file to create
 * @text_content: a NULL terminated strings to write to file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t x;
	ssize_t file = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		for (x = 0; text_content[x] != '\0'; x++)
		{
			file = write(fd, text_content, x);
		}
	}
	close(fd);
	{
		if (file == -1)
		{
			return (-1);
		}
	}
	return (1);
}
