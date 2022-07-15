#include "main.h"

/**
 * _strncat - Concatenates the two strings together
 * @dest: Destination value
 * @src: Source value
 * @n: Limit of the concatenation
 *
 * Return: The pointer to the result dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len;
	int i;

	len = 0;
	i = 0;
	
	while (dest[len])
	{
		len++;
	}

	while (i < n && src[i])
	{
		i++;
		dest[len] = src[i];
		len++;
	}

	dest[len + n + 1] = '\0';

	return (dest);
}
