#include "main.h"

/**
 * leet - Encode string to 1337
 * @s: Testing sting to encode
 *
 * Return: encoded string
 */
char *leet(char *s)
{
	int i = 0;
	int j = 0;
	int k = 5;
	char l[5] = {'A', 'E', 'O', 'T', 'L'};
	char m[5] = {'4', '3', '0', '7', '1'};

	while (s[i])
	{
		j = 0;

		while (j < 1)
		{
			if (s[i] == l[j] || s[i] - 32 == l[j])
			{
				s[i] = m[j];
			}

			j++;
		}

		i++;
	}

	return (s);
}
