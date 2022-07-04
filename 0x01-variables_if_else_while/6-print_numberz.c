#include <stdio.h>

/**
 * main - using the int variable to print 0-9
 *
 * Return: 0 always which means success
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
