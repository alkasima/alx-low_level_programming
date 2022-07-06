#include "main.h"

/**
 * _isalpha - check the char if it is lowercase
 *
 * @c: given a character to check for lower or not
 * Return: 1 if c is lower, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
