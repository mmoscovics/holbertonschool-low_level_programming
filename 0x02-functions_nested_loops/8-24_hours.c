#include "holberton.h"

/**
 * jack_bauer - check the code for Holberton School students.
 *
 * Return: value.
 */
void jack_bauer(void)
{
	int hour_tens;
	int hour_ones;
	int min_tens;
	int min_ones;

	for (hour_tens = '0' ; hour_tens <= '2' ; hour_tens++)
	{
		for (hour_ones = '0' ; hour_ones <= '9' ; hour_ones++)
		{
			for (min_tens = '0' ; min_tens <= '5' ; min_tens++)
			{
				for (min_ones = '0' ; min_ones <= '9' ; min_ones++)
				{
					if (hour_tens <= '2' && hour_ones <= '3')
					{
					_putchar(hour_tens);
					_putchar(hour_ones);
					_putchar(':');
					_putchar(min_tens);
					_putchar(min_ones);
					_putchar('\n');
					}
					else
					break;
				}
			}
		}
	}
}
