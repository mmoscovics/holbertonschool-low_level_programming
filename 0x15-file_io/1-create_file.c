#include "holberton.h"

/**
 * create_file - tested function, creates a file
 *@filename: name of file
 *@text_content: text for file
 * Return: 1 on success
 * or -1 on any fail or NULL
 */
int create_file(const char *filename, char *text_content)
{
	int fd, counter, value;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (-1);
	}
	for (counter = 0; text_content[counter] != '\0'; counter++)
		;
	value = write(fd, text_content, counter);
	if (value == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
