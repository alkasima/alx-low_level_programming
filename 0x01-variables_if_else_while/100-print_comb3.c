#include <stdio.h>

/**
 * main - Print the combination of digits
 *
 * Return: 0 always success
 */

int main(void)
{
	int ch;
	int j;

	for (ch = '0'; ch <= '9'; ch++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if(ch < j)
			{
				putchar(ch);
				putchar(j);

				if (ch != '5' || (ch == '5' && j != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
