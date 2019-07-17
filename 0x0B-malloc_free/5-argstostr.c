#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - tested function, concatenates all arguments of program
 *@ac: argument count
 *@av: argument vector
 * Return: NULL is ac 0, av NULL, or pointer to a new string or NULL if fail
 */
char *argstostr(int ac, char **av)
{
