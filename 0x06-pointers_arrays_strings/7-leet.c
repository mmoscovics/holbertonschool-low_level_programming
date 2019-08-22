#include "holberton.h"

/**
 * leet - encodes string into leet speak
 *@a: input string
 * Return: encoded string
 */
char *leet(char *a)
{
	char *alph = "aeotlAEOTL";
	char *lett = "4307143071";
	int base_iter, iter;

	for (base_iter = 0; a[base_iter] != '\0'; base_iter++)
		for (iter = 0; alph[iter] != '\0'; iter++)
			if (a[base_iter] == alph[iter])
				a[base_iter] = lett[iter];
	return (a);
}
