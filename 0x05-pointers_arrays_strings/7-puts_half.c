#include "main.h"

/**
 * puts_half - print the last half of a string
 * @str: string
 * Return: none
 */

void puts_half(char *str)
{
	int i, k, len, new;

	i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}

	len = i;
	if (len % 2 == 0)
	{
		new = len / 2;
	}
	else
	{
		new = (len - 1) / 2;
	}

	k = len - new;

	while (*(str + j) != '\0')
	{
		_putchar(*(str + k));
		k++;
	}
	_putchar('\n');
}
