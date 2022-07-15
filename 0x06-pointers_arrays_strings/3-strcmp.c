#include "main.h"

/**
 * @s1: First string
 * @s2: Second string
 *
 * Return: the int value
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int j;
	int k;
	int l;
	int lm;

	i = 0, j = 0, k = 0, l = 0;

	while (s1[i])
	{
		i++;
	}

	while (s2[j])
	{
		j++;
	}

	if (i <= j)
	{
		lm = i;
	}
	else
	{
		lm = j;
	}

	while (k <= lm)
	{
		if (s1[k] == s2[k])
		{
			k++;
			continue;
		}
		else
		{
			l = s1[k] - s2[k];
			break;
		}

		k++;
	}

	return (l);
}
