#include "holberton.h"

/**
 * print_sign - check the code for Holberton School students.
 *
 *@n: char/ascii value to check
 *
 * Return: 1 for greater than 0, 0 for 0, -1 for less than 0..
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
