#include "main.h"

/**
 * _strlen - function to count the length of a string
 * @s: string variable
 *
 * Return: the value of the length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	return (i);
}
