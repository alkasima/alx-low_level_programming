#include "main.h"

/**
 * _islower - check the char if it is lowercase
 *
 * @c: given a character to check for lower or not
 * Return: 1 if c is lower, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
