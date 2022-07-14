#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy a string include the terminating null
 * @dest: destination of a string
 * @src: source of a string
 *
 * Return: the value of dest
 */

char *_strcpy(char *dest, char *src)
{
	int j;

	j = 0;

	while (*(src + j) != '\0')
	{
		*(dest + j) = *(src + j);
		j++;
	}	
	*(dest + j) = '\0';
	
	return (dest);
}
