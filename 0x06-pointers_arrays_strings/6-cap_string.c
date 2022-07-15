#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalize letter
 * @s: String test
 *
 * Return: value
 */
char *cap_string(char *s)
{
	int j = 0, i;
	int c = 13;
	char pc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(',')','{','}'};

	while (s[j])
	{
		i = 0;

		while (i < c)
		{
			if ((j == 0 || s[j - 1] == pc[i]) && (s[j]) && (s[j] >= 97 && s[j] <= 122))
				s[j] -= 32;

			i++;
		}

		j++;
	}

	return (s);
}
