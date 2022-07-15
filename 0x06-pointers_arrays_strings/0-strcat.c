#include "main.h"
#include <stdio.h>

/**
 * _strcat - function to concatenates two strings together
 * @dest: Destination of string
 * @src: String source
 *
 * Return: Pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int len;
	int i;

	len = 0;

	while (dest[len])
	{
		len++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len++;
	}

	dest[len] = '\0';
	return (dest);
}
