#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 *@l: integers last digit
 * Return: value.
 */
int print_last_digit(int l)
{
	if (l >= 0)
	{
		l = l % 10;
		_putchar('0' + l);
		return (l);
	}
	else
	{
		l = l * -1;
		l = l % 10;
		_putchar('0' + l);
		return (l);
	}
	return (0);
}
