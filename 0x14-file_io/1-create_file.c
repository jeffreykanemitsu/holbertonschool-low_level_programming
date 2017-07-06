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
	size_t len;
	ssize_t file = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	for (len = 0; text_content && text_content[len] != '\0'; len++)
		;
	if (text_content && len)	
	{
		file = write(fd, text_content, len);
		
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
