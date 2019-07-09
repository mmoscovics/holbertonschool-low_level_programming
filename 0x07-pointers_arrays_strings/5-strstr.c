#include "holberton.h"

/**
 * _strstr - tested function
 *@haystack: base string
 *@needle: substring
 * Return: string
 */
char *_strstr(char *haystack, char *needle)
{
	int pos1, pos2;

	for (pos1 = 0; haystack[pos1] != '\0'; pos1++)
	{
		for (pos2 = 0; needle[pos2] != '\0'; pos2++)
		{
			if (needle[pos2] == haystack[pos1])
			{
				return (needle);
			}
		}
	}
	if (needle == '\0')
		return (needle);
	return (0);
}
