#include "main.h"

/**
 * _strncpy - Copy string
 * @dest: Destination value
 * @src: Source value
 * @n: Copy limit
 *
 * Return: value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (src[j])
	{
		j++;
	}

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
