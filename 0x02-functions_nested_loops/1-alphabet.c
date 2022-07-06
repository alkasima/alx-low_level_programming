#include "main.h"


/**
 * main - program to print alphabet using _putchar
 *
 * Return: 0 always success
 */

void print_alphabet(void)
{
	int num;
	
	for (num = 'a'; num <= 'z'; num++)
	{
		_putchar(num);
	}

	_putchar('\n');
	return (0);

}

