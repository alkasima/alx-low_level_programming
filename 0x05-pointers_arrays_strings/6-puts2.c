#include "main.h"

/**
 * puts2 - print other character of a string
 * @str: string variable
 *
 * Return: none
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
			i++;
		}
		_putchar('\n');
	}
}