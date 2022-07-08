#include "main.h"

/**
 * print_most_numbers - print the number 0 to 9 without 2 & 4
 *
 * Return: the numbers is 0 to 9
 */

void print_most_numbers(void)
{
	int x = 0;

	for (; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			_putchar(x + '0');
		}
	}

	_putchar('\n');
}
