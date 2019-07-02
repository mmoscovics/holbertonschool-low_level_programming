#include "holberton.h"

/**
* rev_string - tested function
*@s: input string
* Return: maybe
*/
void rev_string(char *s)
{
int length, i;
char *beg, *end, temp;
for (length = 0 ; s[length] != '\0' ; ++length)
{
}
beg = s;
end = s;
for (i = 0 ; i < length - 1 ; i++)
{
	end++;
}
for (i = 0 ; i < length / 2 ; i++)
{
	temp = *end;
	*end = *beg;
	*beg = temp;
	beg++;
	end--;
}
}
