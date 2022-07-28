#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - memory allocates
 * @b: the size of memory to allocate
 *
 * Return: none
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
