#include "holberton.h"

/**
 * _abs - check the code for Holberton School students.
 *@a: integer
 * Return: 0.
 */
int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else
	{
		a = a * -1;
		return (a);
	}
}
