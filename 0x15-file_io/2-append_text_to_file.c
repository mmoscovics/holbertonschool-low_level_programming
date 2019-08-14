#include "holberton.h"

/**
 * append_text_to_file - tested function, appends text at end of a file
 *@filename: name of file
 *@text_content: text for file
 * Return: 1 on success
 * or -1 on fail or NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, counter, value;

	if (!filename)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (counter = 0; text_content[counter] != '\0'; counter++)
			;
		value = write(fd, text_content, counter);
		if (value == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
