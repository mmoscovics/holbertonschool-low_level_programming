#include "holberton.h"

/**
 * _isalpha - check the code for Holberton School students.
 *
 *@c: char/ascii value to check
 *
 * Return: 1 for letters 0 for everything else.
 */
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}

