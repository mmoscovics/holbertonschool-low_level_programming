#include "holberton.h"

/**
 * read_textfile - tested function, reads a text file and prints to stdout
 *@filename: name of file
 *@letters: number of letters to print
 * Return: actual numbers of letters printed
 * or 0 if fail or any errors
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, counter, value;
	char *buffer;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(fd);
		return (-1);
	}
	counter = read(fd, buffer, letters);
	if (counter == -1)
	{
		close(fd);
		free(buffer);
		return (-2);
	}
	buffer[counter] = '\0';
	value = write(STDOUT_FILENO, buffer, counter);
	if (value == -1 || value != counter)
	{
		close(fd);
		free(buffer);
		return (-3);
	}
	close(fd);
	free(buffer);
	return (value);
}
