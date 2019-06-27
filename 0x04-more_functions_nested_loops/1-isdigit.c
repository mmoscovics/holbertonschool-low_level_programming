#include "holberton.h"

/**
* _isdigit - function testing
*@c: local variable
* Return: 1 for digits
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
