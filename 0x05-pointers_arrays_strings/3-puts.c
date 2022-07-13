#include "main.h"

/**
 * _puts - function to print a string
 * @str: string variable
 *
 * Return: none
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
