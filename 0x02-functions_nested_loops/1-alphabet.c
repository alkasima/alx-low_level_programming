#include "main.h"
/**
 * main - program to print alphabet using _putchar
 *
 * Return: 0 always success
 */
int print_alphabet(void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}

