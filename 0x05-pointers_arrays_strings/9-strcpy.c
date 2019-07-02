#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - tested function
 *@dest: destination string
 *@src: sorce string
 * Return: destination
 */
char *_strcpy(char *dest, char *src)
{
	int length, temp;

	for (length = 0 ; src[length] != '\0' ; length++)
		;
	for (temp = 0 ; temp <= length; temp++)
	{
		dest[temp] = src[temp];
	}
	return (dest);
}
