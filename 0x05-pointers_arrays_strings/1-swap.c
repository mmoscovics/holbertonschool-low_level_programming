#include "holberton.h"

/**
* swap_int - tested function
*@a: first variable
*@b: second variable
* Return: 0
*/
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
