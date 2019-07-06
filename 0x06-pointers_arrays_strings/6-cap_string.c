#include "holberton.h"

/**
 * cap_string - tested function
 *@a: string
 * Return: string
 */
char *cap_string(char *a)
{
	int i;

	for (i = 0 ; *(a + i) != '\0' ; i++)
	{
		if (i == 0)
		{
			if (a[i] >= 'a' && a[i] <= 'z')
				a[i] = a[i] - 32;
			continue;
		}
		if (a[i] == ' ')
		{
			i++;
			if (*(a + i) >= 'a' && *(a + i) <= 'z')
			{
				*(a + i) = *(a + i) - 32;
				continue;
			}
		}
		else
		{
			if (a[i] >= 'A' && a[i] <= 'Z')
				a[i] = a[i] + 32;
		}
	}
	return (a);
}
