#include "main.h"

/**
 * _strpbrk - search a string
 * @s: source of the testing string
 * @accept: the accepted characters
 *
 * Return: the string
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i])
	{
		j = 0;

		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				s += i;
				return (s);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
