#include "holberton.h"

/**
 * string_toupper - tested function
 *@a: input string
 * Return: string
 */
char *string_toupper(char *a)
{
	int ln, i;

	for (ln = 0 ; *(a + ln) != '\0' ; ln++)
		;
	for (i = 0 ; i < ln ; i++)
	{
		if (*(a + i) >= 'a' && *(a + i) <= 'z')
		{
			*(a + i) = *(a + i) - 32;
		}
	}
	return (a);
}
