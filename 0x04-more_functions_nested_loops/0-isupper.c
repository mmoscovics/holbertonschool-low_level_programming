#include "holberton.h"

/**
* _isupper - function we using
*@c: local variable
* Return: 1 for uppercase
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
