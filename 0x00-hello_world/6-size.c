#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{printf("%s%d%s", "Size of a char: ", sizeof(char), " byte(s)\n");
printf("%s%d%s", "Size of a int: ", sizeof(int), " byte(s)\n");
printf("%s%d%s", "Size of a long int: ", sizeof(long int), " byte(s)\n");
printf("%s%d%s", "Size of a long long: ", sizeof(long long), " byte(s)\n");
printf("%s%d%s", "Size of a float: ", sizeof(float), " byte(s)\n");
return (0);
}
