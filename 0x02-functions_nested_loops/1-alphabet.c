#include <stdio.h>

/**
 * main - program to print alphabet using _putchar
 *
 * Return: 0 always success
 */

int main(void)
{
	print_alphabet();
	_putchar('\n');
}

/* Function to return alphabet a -z */

int print_alphabet()
{
	char ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	
}
