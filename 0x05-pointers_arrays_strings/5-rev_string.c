#include "main.h"

/**
 * rev_string - function that reverse a string
 * @s: pointer
 *
 * Return: none
 */

void rev_string(char *s)
{
	int i;
	int l;
	int len = 0;
	char c;

	while (s[len])
	{
		len++;
		l = len - 1;
	}

	for (i = 0; i < len / 2; i++)
	{
		c = s[i];
		s[i] = s[l];
		s[l] = c;
		l--;
	}
}
