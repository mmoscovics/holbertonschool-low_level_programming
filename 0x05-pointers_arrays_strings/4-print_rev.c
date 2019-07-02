#include "holberton.h"

/**
* print_rev - tested function
*@s: input string
* Return: maybe
*/
void print_rev(char *s)
{
char r[1000];
int begin, end, length = 0;
for (length = 0 ; s[length] != '\0' ; ++length)
{
}
end = length - 1;
for (begin = 0 ; begin < length ; ++begin)
{
	r[begin] = s[end];
	end--;
	_putchar(r[begin]);
}
_putchar('\n');
}
