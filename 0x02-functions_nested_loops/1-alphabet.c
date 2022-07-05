#include <stdio.h>

/**
 * main - program to print alphabet using _putchar
 *
 * Return: 0 always success
 */

int main(void)
{
	print_alphabet();

}

/* Function to return alphabet a -z */

void print_alphabet(void)
{
	int num;
	
	for (num = 'a'; num <= 'z'; num++)
	{
		putchar(num);
	}

	putchar('\n');
	
}
