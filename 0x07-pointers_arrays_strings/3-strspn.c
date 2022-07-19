#include "main.h"

/**
 * _strspn - search a string to set of bytes
 * @s: the source of string to test
 * @accept: the accepted string
 *
 * Return:number of bytes in the segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, k = 0;

	while (accept[i])
	{
		j = 0;

		while (s[j] != 32)
		{
			if (accept[i] == s[j])
			{
				k++;
			}

			j++;
		}

		i++;
	}
	return (k);
}
