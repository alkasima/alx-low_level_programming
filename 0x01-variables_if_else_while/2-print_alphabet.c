#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Starting point
 *
 * Return: 0 which is always success
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
		printf("\n");
	}
return (0);
}
