#include "main.h"

/**
 * print_alphabet_x10 -
 *
 * Return: 0 always success
 */
int print_alphabet_x10(void)
{
	char c;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
	return (0);
}
		
