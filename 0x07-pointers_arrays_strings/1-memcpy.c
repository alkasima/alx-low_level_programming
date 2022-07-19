#include "main.h"

/**
 * _memcpy - start by copy the memory area
 * @dest: description of memory area
 * @src: the source of the memory area
 * @n: the bytes from memory area
 *
 * Return: memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
