#include "holberton.h"

/**
 * times_table - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void times_table(void)
{
int mult;
int num;
int val;
for (mult = 0 ; mult <= 9 ; mult++)
{
for (num = 0 ; num <= 9 ; num++)
	{
	val = mult * num;
	if (num == 0)
	{
	_putchar(val + '0');
	}
	else if (num > 0 && val < 10)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(val + '0');
	}
	else
	{
	_putchar(',');
	_putchar(' ');
	_putchar((val / 10) + '0');
	_putchar((val % 10) + '0');
	}
}
_putchar('\n');
}
}
