#include "main.h"

/**
 * _isupper - check to see if letter is upper case
 * @x: The number to check for
 *
 * Return: 1 if the letter is upper or 0 else
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}

	return (0);
}
