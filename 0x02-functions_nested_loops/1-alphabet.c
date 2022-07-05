#include <stdio.h>

/**
 * main - program to print alphabet using _putchar
 *
 * Return: 0 always success
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
