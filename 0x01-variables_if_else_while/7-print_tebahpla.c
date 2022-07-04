#include <stdio.h>

/**
 * main - Print alphabet in reverse order
 *
 * Return: 0 always success
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
