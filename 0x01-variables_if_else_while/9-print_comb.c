#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;

for (num = '0' ; num <= '9' ; num++)
{
putchar(num);
while (num <= '8')
{
putchar(44);
putchar(32);
break;
}
}
putchar('\n');
return (0);
}
