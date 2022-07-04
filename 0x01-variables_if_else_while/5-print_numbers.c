#include <stdio.h>

/**
 * main - The number from 0-9 is single lets print all
 *
 * Return: 0 which is always return success
 */
int main(void)
{
	char num;

	for (num = 0; num <=9; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
