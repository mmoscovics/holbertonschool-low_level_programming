#include "holberton.h"

/**
* puts_half - tested function
*@str: input string
* Return: maybe?
*/
void puts_half(char *str)
{
	int i, length;

	for (length = 0 ; str[length] != '\0' ; ++length)
		;
	if (length % 2 == 0)
	{
		for (i = 0 ; i <= length ; ++i)
		{
			if (i >= length / 2)
			{
				_putchar(str[i]);
			}
		}
	}
	else
	{
		for (i = 0 ; i <= length ; ++i)
		{
			if (i >= (length - 1) / 2)
			{
				_putchar(str[i]);
			}
		}
	}
	_putchar('\n');
}
