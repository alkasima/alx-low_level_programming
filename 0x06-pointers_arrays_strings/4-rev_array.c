#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverser the integers array content
 * @a: Array of integers
 * @n: The number of elments to swap
 *
 * Return: none
 */
void reverse_array(int *a, int n)
{
	int *j, i, x, c;

	j = a;

	for (i = 1; i < n; i++)
	{
		j++;
	}

	for (c = 0; c < i / 2; c++)
	{
		x = a[c];
		a[c] = *j;
		*j = x;
		j--;
	}
}
