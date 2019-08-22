#include "holberton.h"

/**
 * rot13 - encodes string in rot13
 *@a: input string
 * Return: rot13 string
 */
char *rot13(char *a)
{
	char *alph = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int base_iter, iter;

	for (base_iter = 0; a[base_iter] != '\0'; base_iter++)
		for (iter = 0; alph[iter] != '\0'; iter++)
			if (a[base_iter] == alph[iter])
			{
				a[base_iter] = rot[iter];
				break;
			}
	return (a);
}
