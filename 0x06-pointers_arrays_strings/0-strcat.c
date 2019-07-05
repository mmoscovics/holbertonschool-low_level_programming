#include "holberton.h"

/**
 * _strcat - tested function
 *@dest: destination variable
 *@src: source variable
 * Return: destination
 */
char *_strcat(char *dest, char *src)
{
	int len_one, len_two;

	for (len_one = 0 ; *(dest + len_one) != '\0' ; len_one++)
		;
	for (len_two = 0 ; *(src + len_two) != '\0' ; len_two++, len_one++)
		*(dest + len_one) = *(src + len_two);
	*(dest + len_one) = '\0';
	return (dest);
}
