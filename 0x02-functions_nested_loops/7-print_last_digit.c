#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 *@l: integers last digit
 * Return: value.
 */
int print_last_digit(int l)
{
	l = l % 10;
	if (l < 0)
	{
		l = l * -1;
	}
	_putchar(l + '0');
	return (l);
}
