#include "holberton.h"

/**
* print_most_numbers - funtion being tested
*
* Return: 0
*/
void print_most_numbers(void)
{
int num;
for (num = 0 ; num <= 9 ; num++)
{
	if (num == 2 || num == 4)
	{
		continue;
	}
	_putchar(num + '0');
}
_putchar('\n');
}
