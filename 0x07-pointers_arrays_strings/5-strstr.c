#include "holberton.h"

/**
 * _strstr - tested function
 *@haystack: base string
 *@needle: substring
 * Return: string
 */
char *_strstr(char *haystack, char *needle)
{
	char *pos1, *pos2;

	pos2 = needle;
	for (; *haystack != 0; haystack++)
	{
		if (*haystack != *pos2)
			continue;
		pos1 = haystack;
		while (haystack != '\0')
		{
			if (*pos2 == 0)
				return (haystack);
			if (*pos1++ != *pos2++)
				break;
		}
		pos2 = needle;
	}
	if (*pos2 == '\0')
		return (haystack);
	return (0);
}
