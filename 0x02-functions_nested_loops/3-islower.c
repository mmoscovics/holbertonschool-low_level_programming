#include "holberton.h"

/**
 * _islower - check the code for Holberton School students.
 *
 *@c: char/ascii value to check
 *
 * Return: 1 for lowercase 0 for everything else.
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
