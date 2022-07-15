#include "main.h"

/**
 * string_toupper - Change string lowercase to upper
 * @p: string to modified
 *
 * Return: var
 */
char *string_toupper(char *p)
{
	int i = 0;

	while (p[i])
	{
		if (p[i] >= 97 && p[i] <= 122)
		{
			p[i] -= 32;
		}

		i++;
	}

	return (p);
}
