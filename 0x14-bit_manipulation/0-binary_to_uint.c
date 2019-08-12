#include "holberton.h"

/**
 * binary_to_uint - tested function, converts binary to an int
 *@b: binary string
 * Return: converted number
 * or 0 if there is one or more chars in string b that is not 0 or 1
 * or 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int iter, numb = 0;

	while (b)
	{
		for (iter = 0; b[iter] != '\0'; iter++)
		{
			if (b[iter] == '1')
				numb = (numb * 2 + 1);
			else if (b[iter] == '0')
				numb *= 2;
			else
				return (0);
		}
		return (numb);
	}
	return (0);
}
