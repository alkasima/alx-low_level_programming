#include "main.h"

/**
 * print_rev - function to print strings in reverse
 * @s: strings
 *
 * Return: none
 */

void print_rev(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		while (j)
		{
			_putchar(s[j - 1]);
			j--;
		}
	}

	_putchar('\n');
}
