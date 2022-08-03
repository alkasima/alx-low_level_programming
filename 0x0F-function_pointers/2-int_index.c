#include "function_pointers.h"

/**
 * int_index - index of the array
 * @array: ...
 * @size: ...
 * @cmp: ...
 *
 * Return: ...
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (j < size)
			{
				if (cmp(array[j]))
					return(j);
				
				j++;
			}
		}
	}

	return (-1);
}
