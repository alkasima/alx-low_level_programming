#include "main.h"

/**
 * _strchr - locate a string
 * @s: source of the string to test
 * @c: character to find from the string
 *
 * Return: the string found from the character
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int j;

	while (s[i])
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		if (c == s[j])
		{
			s += b;
			return (s);
		}
	}
	return ('\0');
}
