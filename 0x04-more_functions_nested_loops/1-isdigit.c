#include "main.h"

/**
 * _isdigit - Check if input is a digit
 * @x: The input to be checked
 *
 * Return: 1 if the character is digit 0 else
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}

	return (0);
}
