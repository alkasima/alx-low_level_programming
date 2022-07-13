#include "main.h"

/**
 * swap_int - swap the numbers
 * @a: int variable
 * @b: int variable
 *
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
