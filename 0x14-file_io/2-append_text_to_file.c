#include "holberton.h"
/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;
	ssize_t file = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	fd = open(filename, O_APPEND | O_WRONLY);
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
